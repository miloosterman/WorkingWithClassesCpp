/************************************************************************
* Name: Exercise 3.11 (Employee Class)
* File: EmployeeDemo.cpp
* Author: Milo Osterman
* Date: 3/30/2021
 *************************************************************************/

#include <iostream>
#include "Employee.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    //Create two employee objects
    Employee employeeOne{"Milo", "Osterman", 2000};
    Employee employeeTwo{"Jack", "Nicholson", 1000000};
    
    //Display information of employees one and two
    cout << "Employee one information\n" << endl <<
    "First name: " << employeeOne.getFirstName() << endl <<
    "Last name: " << employeeOne.getLastName() << endl <<
    "Annual salary: " << employeeOne.getSalary() * 12 << endl;
    
    cout << "\nEmployee two information\n" << endl <<
    "First name: " << employeeTwo.getFirstName() << endl <<
    "Last name: " << employeeTwo.getLastName() << endl <<
    "Annual salary: " << employeeTwo.getSalary() * 12 << endl;
    
    //Give each employee a 10 percent raise
    cout << "\nCongratulations, all employees are receiving a 10% raise!" << endl;
    employeeOne.setSalary(employeeOne.getSalary() * 1.1);
    employeeTwo.setSalary(employeeTwo.getSalary() * 1.1);
    
    //Display information of employees one and two after raise
    cout << "\nEmployee one information\n" << endl <<
    "First name: " << employeeOne.getFirstName() << endl <<
    "Last name: " << employeeOne.getLastName() << endl <<
    "Annual salary: " << employeeOne.getSalary() * 12 << endl;
    
    cout << "\nEmployee two information\n" << endl <<
    "First name: " << employeeTwo.getFirstName() << endl <<
    "Last name: " << employeeTwo.getLastName() << endl <<
    "Annual salary: " << employeeTwo.getSalary() * 12 << endl;
    
}
