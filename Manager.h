#pragma once
#include "Employee.h"
#include <string>

class Manager : public Employee {
    private:
        // The address of the employee underneath the Manager.
        Employee *assigned;
    public:
        Manager(std::string n, double s);
        void assignEmployee(Employee* emp);
        void giveRaise(double raise);
};