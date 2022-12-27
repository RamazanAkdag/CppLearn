#include <iostream>
using namespace std;
#include "studentClass.h"
/*
constructor nesne türetildiği zaman çalışan fonksiyonlar iken destructorlar nesne yok edildiginde calısır

~destructor();

bu sekilde tanımlanır sadece 1 tane tanımlanabilir ve içerisine herhangi bir parametre almaz


main fonkunun icerisinde return 0 kısmına gelindiginde bellekte olusan yerlerden elemanlar silindigi icin
destructor calısır

*/

int main(){
    student student1("ramazan","akdag","3162");

    student student2;

    student student3(student1);

    
   
    

    student1.displayInformation();


    student2.displayInformation();

    student3.displayInformation();

    cout<<"\n\n"<<endl;

    

    if(true){

        student ramo;
    }

    


    return 0;
}