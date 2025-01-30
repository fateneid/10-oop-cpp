#pragma once

#include <iostream>
using namespace std;

namespace Exercise1_Person {

	class clsPerson {

	private:

		int _ID;
		string _FirstName;
		string _LastName;
		string _Email;
		string _Phone;

	public:

		clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
			_ID = ID;
			_FirstName = FirstName;
			_LastName = LastName;
			_Email = Email;
			_Phone = Phone;
		}

		int GetID() {
			return _ID;
		}

		void SetFirstName(string FirstName) {
			_FirstName = FirstName;
		}

		string GetFirstName() {
			return _FirstName;
		}

		void SetLastName(string LastName) {
			_LastName = LastName;
		}

		string GetLastName() {
			return _LastName;
		}

		string GetFullName() {
			return _FirstName + " " + _LastName;
		}

		void SetEmail(string Email) {
			_Email = Email;
		}

		string GetEmail() {
			return _Email;
		}

		void SetPhone(string Phone) {
			_Phone = Phone;
		}

		string GetPhone() {
			return _Phone;
		}

		void Print() {
			cout << "\nInfo:";
			cout << "\n_________________________________";
			cout << "\nID       : " << _ID;
			cout << "\nFirstName: " << _FirstName;
			cout << "\nLastName : " << _LastName;
			cout << "\nFull Name: " << GetFullName();
			cout << "\nEmail    : " << _Email;
			cout << "\nPhone    : " << _Phone;
			cout << "\n_________________________________\n";

		}

		void SendEmail(string Subject, string Body) {

			cout << "\nThe following message sent successfully to email: " << _Email;
			cout << "\nSubject: " << Subject;
			cout << "\nBody: " << Body << "\n";

		}

		void SendSMS(string Message) {

			cout << "\nThe following SMS sent successfully to phone: " << _Phone << "\n";
			cout << Message << "\n";

		}

	};


	void Task() {

		clsPerson Person1(10, "Some", "One", "anymail@gmail.com", "0123456789");
		Person1.Print();

		Person1.SendEmail("Hi", "How are you?");
		Person1.SendSMS("How are you?");


	}

}
