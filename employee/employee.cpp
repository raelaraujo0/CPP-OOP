#include <iostream>
#include <string>
#include "employee.h" 

using namespace std;

Employee::Employee(string Name, string EntryDate, float Salary, bool HasLeave)
{
    name = Name;
    entryDate = EntryDate;
    salary = Salary;
    hasLeave = HasLeave;
}

void Employee::insertEmployeetDatas()
{
    cout << "Insert name: ";
    cin >> name; cout << endl;
    cout << "Insert entry date: ";
    cin >> entryDate; cout << endl;
    cout << "Insert employee's salary: ";
    cin >> salary; cout << endl;
}

void Employee::printFullEmployee()
{
    cout << name << endl;
    cout << entryDate << endl;
    cout << salary << endl;
    cout << hasLeave << endl;
    cout << endl;
}

