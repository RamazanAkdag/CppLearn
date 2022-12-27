
#include <iostream>
#include "classInheritance.h"

int main(){

    baseClass obje1(5);
    derivedClass obje2(8,3);

    cout<<"for base X : "<<obje1.getX()<<endl;
    cout<<"for base Y : "<<obje2.getX()<<" , Y : "<<obje2.getY()<<endl;


    //cıktıya bakılırsa consturctorlardan baseclassınki önce calısıyor
    //ama programdan cıkılırken derived classın destructoru önce calısıyor sonra yine aynı nesnenin yıkılması icin baseclass destructoru de calısıyor
    //en son da obje1 icin baseclass destructoru calısarak program sonlanıyor...
    








    return 0;
}