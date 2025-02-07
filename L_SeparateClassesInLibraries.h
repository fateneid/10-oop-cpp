#pragma once

#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"
using namespace std;

namespace L_SeparateClassesInLibraries {


	void Task() {

		clsEmployee Employee1(10, "Some", "One", "Teacher", "anymail@gmail.com", "0123456789", 4000, "Teaching");
		Employee1.Print();

		Employee1.SendEmail("Hi", "How are you?");
		Employee1.SendSMS("How are you?");


	}

}

