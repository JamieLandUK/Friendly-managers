#include "Manager.h"
#include <string>

// Constructor
Manager::Manager(std::string n, double s) : Employee(n, s) {};

// Taking a pointer to the employee.
void Manager::assignEmployee(Employee* emp) {
    // Making the address in the class point to the employee given.
    assigned = emp;
}

// Takes the assigned value and increases the salary by the raise.
void Manager::giveRaise(double raise) {
    assigned->salary += raise;
}