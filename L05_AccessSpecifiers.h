#pragma once

#include <iostream>
using namespace std;

namespace L05_AccessSpecifiers {

	class clsPerson {

	private:

		int Variable1 = 5;	
		int Function1() {
			return 40;
		}
		
	protected:

		int Variable2 = 100;
		int Function2() {
			return 50;
		}


	public:

		string FirstName;
		string LastName;

		string FullName() {
			return FirstName + " " + LastName;
		}

		float Function3() {
			return Function1() * Variable1 * Variable2;
		}

	};

	void Task() {

		clsPerson Person1;

		Person1.FirstName = "Faten";
		Person1.LastName = "Mady";

		cout << "Person1: " << Person1.FullName() << endl;

		cout << Person1.Function3() << endl;



	}


}