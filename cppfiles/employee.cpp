#include <iostream>
#include <string>
#include "employee.h" 

using namespace std;

Employee::Employee(string Name, string EntryDate, int Salary, bool HasLeave)
{
    name = Name;
    entryDate = EntryDate;
    salary = Salary;
    hasLeave = HasLeave;
}

void Employee::printFullEmployee()
{
    cout << name << endl;
    cout << entryDate << endl;
    cout << salary << endl;
    cout << hasLeave << endl;
    cout << endl;
}
