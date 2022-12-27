#include <iostream>
#include "cast.h"

using namespace std;

int main(){
    // Employee ramo = Employee("ramazan","akdag",3000.000);
    // ramo.displayInfo();
    // cout<<"____________________\n"<<endl;
    // Manager beko = Manager("fırat","Akdag",40000,"yazılım");

    // beko.displayInfo();


    /**
     * UPCASTİNG
     * sen base class pointeri ile derived class objesini yönetirsen ana kaynak olarak base classın kodları referans alınır
     * yani örnegin displayInfo fonksiyonu baseclassta buklunan şekliyle calısır ve departman bilgisini yazdırmaz
     * 
     * 
     * VİRTUAL
     * birden fazla classta bulunan aynı isimli fonksiyonlardan ana classtaki fonku tanımlarken başına "virtual" keywordu eklenirse
     * o fonksiyon hangi class üzerinden cagırılmışsa o classta tanımlanmış şekliyle çalışır
     */

    Employee* emp1;
    Manager mng("ogun","birinci",3500,"software");
    emp1 = &mng;
    emp1->displayInfo();
    mng.displayInfo();

    cout<<"------------------------------"<<endl;
    Employee emp("ramazan","akdag",3000);
    Employee* emp2 = &emp;

    Manager* mng2 = (Manager*)(emp1);
    Manager* mng3 = (Manager*)(emp2);

    cout<<mng3->mngDepartment <<endl;
     cout<<"------------------------------"<<endl;
    emp1->displayInfo();
    mng2->displayInfo();







    return 0;
}