#pragma once

#include <iostream>
using namespace std;

namespace L08_PropertiesSetAndGetThroughEquals {

	class clsPerson {

	private:

		string _FirstName;
		string _LastName;

	public:

		void SetFirstName(string FirstName) {
			_FirstName = FirstName;
		}

		string GetFirstName() {
			return _FirstName;
		}

		__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

		void SetLastName(string LastName) {
			_LastName = LastName;
		}

		string GetLastName() {
			return _LastName;
		}

		__declspec(property(get = GetLastName, put = SetLastName)) string LastName;

	};

	void Task() {

		clsPerson Person1;

		Person1.FirstName = "Faten";
		Person1.LastName = "Mady";

		cout << "First Name: " << Person1.FirstName << endl;
		cout << "Last Name: " << Person1.LastName << endl;


	}


}
