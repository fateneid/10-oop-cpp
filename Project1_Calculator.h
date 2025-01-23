#pragma once

#include <iostream>
using namespace std;

namespace Project1_Calculator {

	class clsCalculator {

	private:

		float _Result = 0;

		float _LastNumber = 0;
		string _LastOperation = "";
		float _PerviousResult = 0;

	public:  

		void Add(float Number) {

			_PerviousResult = _Result;
			_LastNumber = Number;   
			_LastOperation = "Adding";

			_Result += Number;

		}

		void Subtract(float Number) {

			_PerviousResult = _Result;
			_LastNumber = Number;
			_LastOperation = "Subtracting";

			_Result -= Number;

		}

		void Multiply(float Number) {

			_PerviousResult = _Result;
			_LastNumber = Number;
			_LastOperation = "Multiplying";

			_Result *= Number;
		}

		void Divide(float Number) {

			_PerviousResult = _Result;
			_LastNumber = Number;
			_LastOperation = "Dividing";

			if (Number == 0) {
				Number = 1;
			}

			_Result /= Number;

		}

		void Clear() {

			_PerviousResult = 0;
			_Result = 0;
			_LastNumber = 0;
			_LastOperation = "Clear";

		}
		 
		void PrintResult() {

			cout << "Result After " << _LastOperation << " " 
				<< _LastNumber << " is: " << _Result << '\n';

		}


		void CancelLastOperation() {

			_Result = _PerviousResult;
			_LastNumber = 0;
			_LastOperation = "Cancelling Last Operation";

		}

		float GetFinalResult() {
			return _Result;
		}
		
	};

	void Task() {

		clsCalculator Calculator1;

		Calculator1.Clear();

		Calculator1.Add(10);
		Calculator1.PrintResult();

		Calculator1.Add(100);
		Calculator1.PrintResult();

		Calculator1.Subtract(20);
		Calculator1.PrintResult();

		Calculator1.Divide(0);
		Calculator1.PrintResult();

		Calculator1.Divide(2);
		Calculator1.PrintResult();

		Calculator1.Multiply(3);
		Calculator1.PrintResult();

		Calculator1.CancelLastOperation();
		Calculator1.PrintResult();

		Calculator1.Clear();
		Calculator1.PrintResult();



	}


}
