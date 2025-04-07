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
	/*	void getName(string name) {this->name = name;}
		void getEntryDate(string entryDate) {this->entryDate = entryDate;}
		void getSalary(int salary) {this->salary = salary;}
	*/

	Employee(string Name, string EntryDate, int Salary){
		name = Name;
		entryDate = EntryDate;
		salary = Salary;
	}

		void printFullEmployee(){
			cout << name <<  " " <<  entryDate << " " << salary << " " <<  endl;
		}
};
