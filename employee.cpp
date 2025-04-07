#include <iostream>
#include <string>

using namespace std;

class Employee
{
	private:
		string name;
		string entryDate;
		int salary;
	public:
		void getName(string name) {this->name = name;}
		void getEntryDate(string entryDate) {this->entryDate = entryDate;}
		void getSalary(int salary) {this->salary = salary;}

		void printFullEmployee(){
			cout << name <<  " " <<  entryDate << " " << salary << " " <<  endl;
		}
};
