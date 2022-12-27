#include <iostream>
using namespace std;
#include "studentClass.h"
/*

*/

int main(){
    student student1;
    student student2;
   
    student1.setName("romo");
    student1.setSurname("akdag");
    student1.setID("399");

    student1.displayInformation();


    student2.setInformation("Oykuu","Atak","49");
    student2.displayInformation();


    return 0;
}