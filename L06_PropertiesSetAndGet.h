#pragma once

#include <iostream>
using namespace std;

namespace L06_PropertiesSetAndGet {

	class clsPerson {

	private:
		string _FirstName;
		string _LastName;
		string _ID = "123456";

	public:

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

		string GetID() {
			return _ID;
		}

		string FullName() {
			return _FirstName + " " + _LastName;
		}

	};

	void Task() {

		clsPerson Person1;

		Person1.SetFirstName("Faten");
		Person1.SetLastName("Mady");

		cout << "First Name: " << Person1.GetFirstName() << endl;
		cout << "Last Name: " << Person1.GetLastName() << endl;
		cout << "Full Name: " << Person1.FullName() << endl;
		cout << "ID: " << Person1.GetID() << endl;  //Read only


	}


}