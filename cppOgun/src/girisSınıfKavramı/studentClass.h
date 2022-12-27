#include <iostream>
using namespace std;

class student
{
    public:
    string studentName, studentSurname, studentID;
    void displayInformation();





};

void student::displayInformation(){
    cout<<"Name : "<<studentName<<" "<<studentSurname<<endl;
    cout<<"ID : "<<studentID<<endl;
}
