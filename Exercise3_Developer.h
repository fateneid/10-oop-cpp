#pragma once

#include <iostream>
using namespace std;

namespace Exercise3_Developer {

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

	class clsEmployee : public clsPerson {

	private:

		string _Title;
		string _Department;
		float _Salary;

	public:

		clsEmployee(int ID, string FirstName, string LastName, string Title,
			string Email, string Phone, float Salary, string Department) :
			clsPerson(ID, FirstName, LastName, Email, Phone) {

			_Title = Title;
			_Salary = Salary;
			_Department = Department;

		}

		void SetTitle(string Title) {
			_Title = Title;
		}

		string GetTitle() {
			return _Title;
		}

		void SetSalary(float Salary) {
			_Salary = Salary;
		}

		float GetSalary() {
			return _Salary;
		}

		void SetDepartment(string Department) {
			_Department = Department;
		}

		string GetDepartment() {
			return _Department;
		}

		void Print() {

			cout << "\nInfo:";
			cout << "\n_________________________________";
			cout << "\nID         : " << GetID();
			cout << "\nFirstName  : " << GetFirstName();
			cout << "\nLastName   : " << GetLastName();
			cout << "\nFull Name  : " << GetFullName();
			cout << "\nTitle      : " << _Title;
			cout << "\nEmail      : " << GetEmail();
			cout << "\nPhone      : " << GetPhone();
			cout << "\nSalary     : " << _Salary;
			cout << "\nDepartment : " << _Department;
			cout << "\n_________________________________\n";

		}

	};

	class clsDeveloper : public clsEmployee {

	private:
		string _MainProgrammingLanguage;

	public:

		clsDeveloper(int ID, string FirstName, string LastName, string Title,
			string Email, string Phone, float Salary, string Department, string MainProgrammingLanguage)
			: clsEmployee(ID, FirstName, LastName, Title,
				Email, Phone, Salary, Department) {

			_MainProgrammingLanguage = MainProgrammingLanguage;
		}

		void SetMainProgrammingLanguage(string MainProgrammingLanguage) {
			_MainProgrammingLanguage = MainProgrammingLanguage;
		}

		string GetMainProgrammingLanguage() {
			return _MainProgrammingLanguage;
		}

		void Print() {

			cout << "\nInfo:";
			cout << "\n_________________________________";
			cout << "\nID                      : " << GetID();
			cout << "\nFirstName               : " << GetFirstName();
			cout << "\nLastName                : " << GetLastName();
			cout << "\nFull Name               : " << GetFullName();
			cout << "\nTitle                   : " << GetTitle();
			cout << "\nEmail                   : " << GetEmail();
			cout << "\nPhone                   : " << GetPhone();
			cout << "\nSalary                  : " << GetSalary();
			cout << "\nDepartment              : " << GetDepartment();
			cout << "\nMainProgrammingLanguage : " << _MainProgrammingLanguage;
			cout << "\n_________________________________\n";

		}


	};

	void Task() {

		clsDeveloper Developer1(10, "Some", "One", "Teacher", "anymail@gmail.com", "0123456789", 4000, "Teaching", "C++");
		Developer1.Print();

		
		Developer1.SendEmail("Hi", "How are you?");
		Developer1.SendSMS("How are you?");


	}

}