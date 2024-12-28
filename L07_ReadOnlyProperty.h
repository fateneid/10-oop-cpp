#pragma once

#include <iostream>
using namespace std;

namespace L07_ReadOnlyProperty {

	class clsPerson {

	private:

		int _ID = 10;
		string _FirstName;
		string _LastName;

	public:

		//Read only property because we don’t have a set function
		int GetID() {
			return _ID;
		}

		//Property Set
		void SetFirstName(string FirstName) {
			_FirstName = FirstName;
		}

		//Property Get
		string GetFirstName() {
			return _FirstName;
		}

		void SetLastName(string LastName) {
			_LastName = LastName;
		}

		string GetLastName() {
			return _LastName;
		}

		string FullName() {
			return _FirstName + " " + _LastName;
		}

	};

	void Task() {

		clsPerson Person1;

		Person1.SetFirstName("Faten");
		Person1.SetLastName("Mady");

		cout << "ID: " << Person1.GetID() << endl;
		cout << "First Name: " << Person1.GetFirstName() << endl;
		cout << "Last Name: " << Person1.GetLastName() << endl;
		cout << "Full Name: " << Person1.FullName() << endl;



	}


}
