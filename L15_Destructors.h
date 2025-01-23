#pragma once

#include <iostream>
using namespace std;

namespace L15_Destructors {

	class clsPerson
	{
	public:

		string FullName;

		//will be called when object is built.
		clsPerson()
		{
			cout << "\nHi, I'm Constructor";
		}
		//will be called when object is destroyed.
		~clsPerson()
		{
			cout << "\nHi, I'm Destructor";
		}

	};
	void Fun1()
	{
		clsPerson Person1;

	}
	void Fun2()
	{
		clsPerson* Person2 = new clsPerson;
		//always use delete whenever you use new, otherwise object will remain in memory
		delete Person2;
	}

	void Task() {

		Fun1();
		Fun2();


	}

}
