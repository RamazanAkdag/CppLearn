#include <iostream>
#include "complexClass.h"

int main(){

    complex complex1(4,-7);

    complex1.displayComplex();

    cout<<"---------------------------------"<<endl;


    complex complex2(5,3);

    complex complex3(8,-3);

    complex temp = complex2.subtractComplex(complex3);
    //complex complex4(complex2.addComplex(complex3));

    complex complex4(temp);

    complex4.displayComplex();














    return 0;
}