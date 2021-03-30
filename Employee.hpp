/************************************************************************
* Name: Exercise 3.11 (Employee Class)
* File: Employee.hpp
* Author: Milo Osterman
* Date: 3/30/2021
 *************************************************************************/
#include <string>

#ifndef Employee_hpp
#define Employee_hpp

class Employee{
public:
    Employee(std::string firstName, std::string lastName, int salary);
    void setFirstName(std::string firstName);
    std::string getFirstName();
    void setLastName(std::string lastName);
    std::string getLastName();
    void setSalary(int salary);
    int getSalary();
    
private:
    std::string employeeFirstName;
    std::string employeeLastName;
    int employeeSalary;
    
};

#endif /* Employee_hpp */
