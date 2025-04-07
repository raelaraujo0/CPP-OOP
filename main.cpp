#include <iostream> // need this to use cout function and other
#include <string>
#include "employee.h"

using namespace std; // using this lets us use names from the standard library

/* In this file, I'll try to learn OOP in C++
and learn on practice VIM */

class Business 
{
	private:
		string name;
		int foundationYear;
		int valuation;

	public:
		void setName(string name) { this->name = name; }
		void setFoundationYear(int foundationYear) { this->foundationYear = foundationYear; }
		void setValuation(int valuation) { this->valuation = valuation; }

		void printFullBusiness() { 
			cout << name << " " << foundationYear << " " << valuation << endl;
		}
};

int main()
{
	Business bus_eins;

	bus_eins.setName("lorem");
	bus_eins.setFoundationYear(1977);
	bus_eins.setValuation(2000000);
	bus_eins.printFullBusiness();

	Business bus_zwei;

	bus_zwei.setName("nsei");
	bus_zwei.setFoundationYear(1982);
	bus_zwei.setValuation(1010110011010);
	bus_zwei.printFullBusiness();

	return 0;
}
