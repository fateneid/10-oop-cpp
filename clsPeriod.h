#pragma once
#include <iostream>
#include "clsDate.h"
using namespace std;

class clsPeriod
{

public:

	clsDate StartDate;
	clsDate EndDate;

	clsPeriod(clsDate StartDate, clsDate EndDate) {

		this->StartDate = StartDate;
		this->EndDate = EndDate;

	}

	static bool IsOverlapPeriods(clsPeriod Period1, clsPeriod Period2) {

		// e1 >= s2  &&  e2 >= s1  -> true
		// e1 < s2   ||  e2 < s1   -> false 

		return !(clsDate::IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) ||
			clsDate::IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate));

	}

	bool IsOverlapWith(clsPeriod Period2) {
		return IsOverlapPeriods(*this, Period2);
	}

	static short PeriodLengthInDays(clsPeriod Period, bool IncludeEndDay = false) {
		return clsDate::GetDiffrenceInDays(Period.StartDate, Period.EndDate, IncludeEndDay);
	}

	short PeriodLengthInDays(bool IncludeEndDay = false) {
		return PeriodLengthInDays(IncludeEndDay);
	}

	static bool IsDateWithinPeriod(clsPeriod Period, clsDate Date) {

		return !(clsDate::CompareDate(Date, Period.StartDate) == clsDate::enCompareDate::Before ||
			clsDate::CompareDate(Date, Period.EndDate) == clsDate::enCompareDate::After);

	}

	bool IsDateWithinPeriod(clsDate Date) {
		return IsDateWithinPeriod(*this, Date);
	}

	static short CountOverlapDays(clsPeriod Period1, clsPeriod Period2) {

		if (!IsOverlapPeriods(Period1, Period2)) {
			return 0;
		}

		clsDate Start, End;
		clsPeriod OverlapPeriod(Start, End);

		OverlapPeriod.StartDate = (clsDate::IsDate1BeforeDate2(Period1.StartDate, Period2.StartDate) ?
			Period2.StartDate : Period1.StartDate);

		OverlapPeriod.EndDate = (clsDate::IsDate1BeforeDate2(Period1.EndDate, Period2.EndDate) ?
			Period1.EndDate : Period2.EndDate);

		return PeriodLengthInDays(OverlapPeriod);

	}

	short CountOverlapDays(clsPeriod Period2) {
		return CountOverlapDays(*this, Period2);
	}

	void Print() {

		cout << "Period Start: ";
		StartDate.Print();

		cout << "Period End: ";
		EndDate.Print();

	}


};

