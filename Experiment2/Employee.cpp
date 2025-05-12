#include "Employee.hpp"
#include <iostream>

using namespace std;

void Employee::setEmployeeID(const int e)
{
    employeeID = e;
}

int Employee::getEmployeeID() const
{
    return employeeID;
}

void Employee::enterDetails()
{
    Person::enterDetails();
    cout << "Enter ID: ";
    cin >> employeeID;
}

void Employee::displayDetails() const
{
    Person::displayDetails();
    cout << "ID: " << employeeID << endl;
}
