#pragma once
#include <iostream>
#include "clsPerson.h"
using namespace std;

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

	string Title() {
		return _Title;
	}

	void SetSalary(float Salary) {
		_Salary = Salary;
	}

	float Salary() {
		return _Salary;
	}

	void SetDepartment(string Department) {
		_Department = Department;
	}

	string Department() {
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


