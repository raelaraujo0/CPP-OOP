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

	/*	void setName(string name) { this->name = name; }
		void setFoundationYear(int foundationYear) { this->foundationYear = foundationYear; }
		void setValuation(int valuation) { this->valuation = valuation; }
		old constructor
	*/

	Business(string Name, int FoundationYear, int Valuation){
		name = Name;
		foundationYear = foundationYear;
		valuation = Valuation;
	}

		void printFullBusiness() { 
			cout << name <<  endl;
			cout << foundationYear <<  endl;
			cout << valuation <<  endl;
		}
};

int main()
{
	Business bus_eins = Business("lorem", 1977, 20000);
	bus_eins.printFullBusiness();

	Business bus_zwei = Business("nsei", 1982, 10000);
	bus_zwei.printFullBusiness();

	return 0;
}
