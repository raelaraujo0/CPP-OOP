#include <iostream>
#include <string>
#include "business.h"

using namespace std;

Business::Business(string Name, int FoudationYear, float Valuation, bool ItsClosed)
{
	name = Name;
	foundationYear = FoudationYear;
	valuation = Valuation;
    itsClosed = ItsClosed;
}

void Employee::insertBusinessDatas()
{
    cout << "Insert name: ";
    cin >> name; cout << endl;
    cout << "Insert foundation year: ";
    cin >> foundationYear; cout << endl;
    cout << "Insert valuation: ";
    cin >> valuation; cout << endl;
}

void Business::printFullBusiness()
{
	cout << name <<  endl;
	cout << foundationYear <<  endl;
	cout << valuation <<  endl;
    cout << itsClosed << endl;
    cout << endl;
}
