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
		void setName(string name){this->name = name;}
		string getName(string name){
			if (name != " ")
				return name;
		};

		void setEntryDate(string entryDate){this->entryDate = entryDate;}
		string getEntrydate(string entryDate){
			if (entryDate != "00/00/0000" || " ")
                return entryDate;
		};		

		void setSalary(int salary){this->salary = salary;}
		int getSalary(int salary){
			if (salary != 0)
				return salary;
		};	

		Employee(string name, string entryDate, int salary);

		void printFullEmployee();
};

#endif
