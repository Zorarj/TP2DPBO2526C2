#include <iostream>
#include "Person.cpp"
using namespace std;

class Employee : public Person{
    private:
        string employeeId;
        string company;
        int salary;
    
    public:
        Employee(){
        }

        Employee(string name,string address,int age,string employeeId,string company,int salary) : Person(name,address,age){
            this->employeeId = employeeId;
            this->company = company;
            this->salary = salary;
        }

        void setEmployeeId(string employeeId){
            this->employeeId= employeeId;
        }
        string getEmployeeId(){
            return this->employeeId;
        }
        void setCompany(string company){
            this->company = company;
        }
        string getCompany(){
            return this->company;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        int getSalary(){
            return this->salary;
        }

};