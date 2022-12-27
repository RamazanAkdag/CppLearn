#include <iostream>
using namespace std;

class complex{
    int real,imag;

    public:
        complex(int a,int b);
        ~complex();
        complex(const complex& oth);
        complex();

        int getReal() const{
            return real;
        }
        int getImag()const{
            return imag;
        }

        void setValue(int a,int b);

        void displayComplex();

        complex addComplex(const complex& oth);

        complex subtractComplex(complex& oth);

        void multiplyMinus();










};
complex::complex(){
    imag = 0;
    real = 0;
    cout<<"nonParameter constructor worked..."<<endl;
}

complex::complex(int a,int b){
    this->real = a;
    this->imag = b;
    cout<<"constructor worked...Complex number inserted"<<endl;
}
complex::~complex(){
    cout<<"destructor worked...Complex number deleted"<<endl;
}
complex::complex(const complex& oth){
    real = oth.real;
    imag = oth.imag;
    cout<<"copy constructor worked...complex number copied to target"<<endl;
}

void complex::setValue(int a,int b){
    real = a;
    imag = b;
    cout<<"values defined to targets"<<endl;
}

void complex::displayComplex(){
    (imag >= 0) ? cout<<real<<" + "<<imag<<"i"<<endl  : cout<<real<<" - "<<-1*imag<<"i"<<endl ;
}

complex complex::addComplex(const complex& oth){//parametreyi const olarak aldık cunku uzerinde degisiklik yapmayacagız
    complex result;
    result.real = this->real + oth.real;
    result.imag = this->imag + oth.imag;

    return result;
}

complex complex::subtractComplex(complex& oth){//bunu constla almıyrouz cunku cıkarma islemini varolan sayıyı -1 ile carpıp toplama olarak dusunebiliriz
    complex result;
    oth.multiplyMinus();

    result.real = this->real + oth.real;
    result.imag = this->imag + oth.imag;

    return result;

}

void complex::multiplyMinus(){

    this->real = -1 * this->real;
    this->imag = -1 * this->imag;
}