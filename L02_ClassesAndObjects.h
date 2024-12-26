#pragma once

#include <iostream>
using namespace std;

namespace L02_ClassesAndObjects {

	class clsPerson {

	public:
		string FirstName;
		string LastName;

		string FullName(){
			return FirstName + " " + LastName;
		}

	};

	void Task() {

		clsPerson Person1;

		Person1.FirstName = "Faten";
		Person1.LastName = "Mady";

		cout << Person1.FullName() << endl;
		

	}


}




