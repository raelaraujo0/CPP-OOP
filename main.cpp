#include <iostream> // need this to use cout function and other
#include <string>
#include "employee.h"
#include "business.h"

using namespace std; // using this lets us use names from the standard library

/* In this file, I'll try to learn OOP in C++
and learn on practice VIM */

int main()
{
	Business bus_eins = Business("lorem", 1977, 20000, true);
	bus_eins.printFullBusiness();

	Business bus_zwei = Business("nsei", 1982, 10000, true);
	bus_zwei.printFullBusiness();


	Employee emp_one = Employee("Maquiavel", "27/07/2018", 1412, true);
	emp_one.printFullEmployee();

	Employee emp_two = Employee("Orwell", "01/01/1984", 1412, false);
	emp_two.printFullEmployee();

	return 0;
}
