#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
    protected:
        std::string name;
        int age;

    public:

        void setName(const std::string& n);
        void setAge(const int a);

        std::string getName() const;
        int getAge() const;

        void enterDetails();
        void displayDetails() const;

};

#endif
