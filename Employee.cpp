/************************************************************************
* Name: Exercise 3.11 (Employee Class)
* File: Employee.cpp
* Author: Milo Osterman
* Date: 3/30/2021
 *************************************************************************/

#include "Employee.hpp"
#include <string>

using namespace std;

//Constructor
Employee::Employee(string firstName, string lastName, int salary)
: employeeFirstName{firstName}, employeeLastName{lastName}, employeeSalary{salary}{
    
}

//Getters and setters
void Employee::setFirstName(string firstName){
    employeeFirstName = firstName;
    
}

string Employee::getFirstName(){
    return employeeFirstName;
    
}

void Employee::setLastName(string lastName){
    employeeLastName = lastName;
    
}

string Employee::getLastName(){
    return employeeLastName;
}

void Employee::setSalary(int salary){
    if (salary < 0){
        salary = 0;
    }
    
    employeeSalary = salary;
    
}

int Employee::getSalary(){
    return employeeSalary;
    
}
