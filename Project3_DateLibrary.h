#pragma once
#include <iostream>
#include "clsDate.h"
using namespace std;

namespace Project3_DateLibrary {

	void Task() {

        clsDate Date1;
        Date1.Print();

        clsDate Date2("31/7/2025");
        Date2.Print();

        clsDate Date3(20, 12, 2025);
        Date3.Print();

        clsDate Date4(250, 2025);
        Date4.Print();

        Date1.IncreaseDateByOneMonth();
        Date1.Print();

        system("pause>0");


	}


}