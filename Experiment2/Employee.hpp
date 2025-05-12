#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "Person.hpp"

class Employee : public Person
{

    private:
        int employeeID;

    public:
        void setEmployeeID(const int e);
        int getEmployeeID() const;

        void enterDetails();
        void displayDetails() const;
};

#endif
