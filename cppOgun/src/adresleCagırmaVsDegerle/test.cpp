#include <iostream>
#include "ptr.h"
#include "pureVirtual&abstract.h"
using namespace std;

int main(){

    // Employee emp1("ogun","birinci",3500);

    // Manager mng1("ogun","birinci",3500,"software");

    // cout<<"reference parameter : "<<endl;

    // print(emp1);
    // print(mng1);
    // cout<<"________________POINTER"<<endl;
    // Employee* emp2 = new Employee("ogun","birinci",3500);
    // Manager* mng2 = new Manager("ogun","birinci",3500,"software");
    // print2(emp2);
    // print2(mng2);
    // cout<<"__________________VALUE"<<endl;
    // print3(emp1);
    // print3(mng1);
    // /*deger ile çagrı yapıldıgı zaman virtual fonksiyonlar özelliğini gösteremez ve baseclasstaki haliyle cagrılırlar bundan dolayı
    // mng1 öğesi yazdırılırken departman bilgisi yazılmadı...*/

    // Manager* mng = new Manager("ogun","birinci",3500,"software");
    // Employee* emp = mng;
    // Employee* emp2 = new Manager("ramo","ako",2500,"diferansiyel");


    // delete mng;
    // // emp2 silindigi zaman kendisi employee classından olusmus manager objesi oldugu icin sadece employee destructoru calısıyor
    // /// bu sorunu cözmek icin mires veren sınıfın destructorunun basına virtual keywordu getirilebilir
    // delete emp2; 

    ///////PURE VİRTUAL CLASS////////

    Cat*  cat = new Cat();
    Dog* dog = new Dog();
    Duck* duck = new Duck();

    Animal* animalObject[] = {cat,dog,duck};//hayvan classından olusturdugun pointer ile ondan miras alan sınıflara tek bir sınıftaymış gibi erişebilirsin

    for(int i = 0;i< 3 ; i++){
        animalObject[i]->talk();
    }


    return 0;
}