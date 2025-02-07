#pragma once
#include <iostream>
using namespace std;

namespace Homework_NestedClasses {

    class clsPerson {

    private:

        class clsAddress
        {
        private:
            string _AddressLine1;
            string _AddressLine2;
            string _City;
            string _Country;

        public:

            clsAddress(string AddressLine1, string AddressLine2, string City, string Country) {
                _AddressLine1 = AddressLine1;
                _AddressLine2 = AddressLine2;
                _City = City;
                _Country = Country;
            }

            void SetAddressLine1(string AddressLine1) {
                _AddressLine1 = AddressLine1;
            }

            string AddressLine1(string AddressLine1) {
                return _AddressLine1;
            }

            void SetAddressLine2(string AddressLine2) {
                _AddressLine2 = AddressLine2;
            }

            string AddressLine2(string AddressLine2) {
                return _AddressLine2;
            }

            void SetCity(string City) {
                _City = City;
            }

            string City(string City) {
                return _City;
            }

            void SetCountry(string Country) {
                _Country = Country;
            }

            string Country(string Country) {
                return _Country;
            }

            void Print()
            {
                cout << "\nAddress:\n";
                cout << _AddressLine1 << endl;
                cout << _AddressLine2 << endl;
                cout << _City << endl;
                cout << _Country << endl;
            }
        };

        string _FullName;
        clsAddress _Address;

    public:

        clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
            : _Address(AddressLine1, AddressLine2, City, Country)
        {
            _FullName = FullName;

        }

        void SetFullName(string FullName) {
            _FullName = FullName;
        }

        string FullName(string FullName) {
            return _FullName;
        }

        void Print() {

            cout << "\nName: \n" << _FullName << '\n';
            _Address.Print();

        }

    };

    void Task()
    {
        clsPerson Person1("Random One", "Random Address", "Random Street", "Random City", "Random Country");
        Person1.Print();

        system("pause>0");

    };


}