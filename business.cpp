#include <iostream>
#include <string>
#include "business.h"

using namespace std;

Business::Business(string Name, int FoudationYear, int Valuation)
{
	mame = Name;
	foundationYear = FoudationYear;
	valuation = Valuation;
}

void Business::printFullBusiness()
{
	cout << name <<  endl;
	cout << foundationYear <<  endl;
	cout << valuation <<  endl;

}
