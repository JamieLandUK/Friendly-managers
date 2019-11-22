#pragma once
#include <string>

class Employee {
    private:
        std::string name;
        double salary;
    public:
        // Constructor
        Employee(std::string n, double s);
        void print();
        // The Manager is the friend class so that it can access the salary, to be able to change it.
        friend class Manager;
};