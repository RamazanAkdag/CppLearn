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

        void displayInfo(){
            Employee::displayInfo();
            cout<<"Department : "<<mngDepartment<<endl;
        }

};