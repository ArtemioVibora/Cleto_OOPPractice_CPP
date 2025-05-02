#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

namespace sampleProgram 
{
    class Person
    {
    private:
        string name;
        int age;
        string nationality;
    
    public:
        Person();
        ~Person();

        void setName(const string& newName);
        void setAge(const int& newAge);
        void setNationality(const string& newNationality);
        string getName() const;
        int getAge() const;
        string getNationality() const;

        void display() const;

    };
}

#endif