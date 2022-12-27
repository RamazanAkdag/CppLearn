#include <iostream>

using namespace std;

class Employee{
    public:
        string empName,empSurname;
        double empSalary;
        Employee(string name,string surname,double salary){
            empName = name;
            empSurname = surname;
            empSalary = salary;
        }
        virtual ~Employee(){
             cout<<"employee destructor worked..."<<endl;
        }

        virtual void displayInfo(){
            cout<<"name : "<<empName<<"\nsurname : "<<empSurname<<"\nsalary : "<<empSalary<<endl;
        }


};


class Manager:public Employee{
    public:
        string mngDepartment;
        Manager(string name,string surname,double salary,string department):Employee(name,surname,salary){
            mngDepartment = department;
        }
        ~Manager(){
         cout<<"manager destructor worked..."<<endl;
        }
        void displayInfo(){
            Employee::displayInfo();
            cout<<"Department : "<<mngDepartment<<endl;
        }

};
//reference
void print(Employee& employeeType){
    employeeType.displayInfo();
}
//pointer
void print2(Employee* employeeType){
    employeeType->displayInfo();
}
//value
void print3(Employee employeeType){
    employeeType.displayInfo();
}