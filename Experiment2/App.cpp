#include "Employee.hpp"
#include "App.hpp"
#include <iostream>

void App::run()
{
    Employee e;
    e.enterDetails();
    e.displayDetails();
}
