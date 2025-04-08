#include <iostream>
#include <string>
#include "employee.h" 

using namespace std;

Employee::Employee(string Name, string EntryDate, int Salary)
{
    name = Name;
    entryDate = EntryDate;
    salary = Salary;
}

void Employee::printFullEmployee()
{
    cout << name << endl;
    cout << entryDate << endl;
    cout << salary << endl;
}
