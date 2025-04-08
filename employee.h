#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
	private:
		string name;
		string entryDate;
		int salary;

	public:
		Employee(string name, string entryDate, int salary);

		void printFullEmployee();
};

#endif
