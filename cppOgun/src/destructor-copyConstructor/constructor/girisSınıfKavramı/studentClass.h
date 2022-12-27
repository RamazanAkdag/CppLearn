#include <iostream>
using namespace std;
/*
-private:  keywordu varsayılan olarak tanımlıdır yani 
başına public:
ibaresi koyulmazsay yazılan degiskenler ve metotlar private özellikte olur


-protected : miras alan classlardan da erişilebilir fakat main içerisinden erişilemez*/
class student
{
   
    string studentName, studentSurname, studentID;

    public:
    ~student();
     student();
    student(string name,string surname,string ID);
    student( const student &oth);
    void displayInformation();

    void setName(string name){
        this->studentName = name;
    }
    void setSurname(string surname){
        this->studentSurname = surname;
    }
    void setID(string ID){
        this->studentID = ID;
    }

    // OR

    void setInformation(string name,string surname,string ID){
        this->studentName= name;
        this->studentSurname = surname;
        this->studentID = ID;
    }
    string getName(){
        return this->studentName;
    }
    string getSurname(){
        return this->studentSurname;
    }
    string  getID(){
        return this->studentID;
    }








};
student::~student(){

    cout<<"destructor worked"<<endl;
}
student::student(const student &oth){//aynı sınıftan başka bir objenin bilgileriyle yeni obje oluşturulunca calıstırılıcak cconsturctor
    cout<<"copy cpnstructor worked..."<<endl;
    studentName = oth.studentName;
    studentSurname = oth.studentSurname;
    studentID = oth.studentID;
}
student:: student(){
    this->studentName= "none";
    this->studentSurname = "none";
    this->studentID = "none";

    cout<<"default constructor worked..."<<endl;
}

student::student(string name,string surname,string ID){
    cout<<"parametreli const calısıyor..."<<endl;
    this->studentName = name;
    this->studentSurname = surname;
    this->studentID = ID;

}

void student::displayInformation(){
    cout<<"Name : "<<studentName<<" "<<studentSurname<<endl;
    cout<<"ID : "<<studentID<<endl;
}
