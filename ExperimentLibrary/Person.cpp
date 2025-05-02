#include "Person.h"
#include <iostream>

using namespace sampleProgram;
using namespace std;

Person::Person()
{
    name = "Jeff";
    age = 100;
    nationality = "Filipino";
}

Person::~Person()
{

}
void Person::setName(const string& newName)
{
    this->name = newName;
}

void Person::setAge(const int& newAge)
{
    this->age = newAge;
}

void Person::setNationality(const string& newNationality)
{
    this->nationality = newNationality;
}

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

string Person::getNationality() const
{
    return nationality;
}

void Person::display() const
{
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Nationality: " << getNationality() << endl;
}

int main()
{
    Person p;
    p.display();
}