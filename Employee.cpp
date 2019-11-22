#include "Employee.h"
#include <iostream>

// Constructor
Employee::Employee(std::string n, double s) : name(n), salary(s) {};

// The print function that Employee and Manager both use.
void Employee::print() {
    std::cout << name << " earns £" << salary << std::endl;
}