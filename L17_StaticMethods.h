#pragma once

#include <iostream>
using namespace std;

namespace L17_StaticMethods {

	class clsA
	{
	public:

		static int Func1() {
			return 10;
		}

		int Func2() {
			return 20;
		}

	};

	void Task() {

		//At class level you can call only static methods and static members.

		cout << clsA::Func1() << endl;

		clsA A1, A2;

		cout << A1.Func1() << endl;
		cout << A1.Func2() << endl;
		cout << A2.Func2() << endl;


	}

}