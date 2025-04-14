#include <iostream>
#include <string>
#include "business.h"

using namespace std;

Business::Business(string Name, int FoudationYear, int Valuation, bool ItsClosed)
{
	name = Name;
	foundationYear = FoudationYear;
	valuation = Valuation;
    itsClosed = ItsClosed;
}

void Business::printFullBusiness()
{
	cout << name <<  endl;
	cout << foundationYear <<  endl;
	cout << valuation <<  endl;
    cout << itsClosed << endl;
    cout << endl;
}
