#include "Person.hpp"
#include <iostream>

using namespace std;

void Person::setName(const string& n)
{
    name = n;
}

void Person::setAge(const int a)
{
    age = a;
}

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

void Person::enterDetails()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void Person::displayDetails() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
