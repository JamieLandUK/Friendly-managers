#include "Employee.h"
#include "Manager.h"
#include <iostream>

int main() {
    // Producing the original employee
    Employee cook = Employee("Jesse", 5000);
    // Printing the above information.
    cook.print();

    // Producing the manager who will take the employee
    Manager boss = Manager("Walter", 10000);
    boss.print();

    // The boss takes the address of the cook...
    boss.assignEmployee(&cook);
    // To be able to access the salary and give a raise.
    boss.giveRaise(5000);
    // Reprint the cook to see the new salary.
    cook.print();

    return 0;
}