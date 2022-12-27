#include <iostream>
#include "pointer.h"

int main(){
    // Example exObj, *exPtr;
    // exPtr = &exObj;

    // exObj.x = 5;
    // exObj.y = 3;
    // exObj.print();

    // exPtr->x = 2;// exPtr->x ifadesi = *(exPtr).x
    // exPtr->y = 6;
    // exPtr->print();


    // int* ptr = new int;

    // Example* ptrExample = new Example;

    // ptrExample->x = 1;
    // ptrExample->y = 8;
    // ptrExample->print();

    // int* ptrArray = new int[5];

    // Example* ptrExArray = new Example[5];

    // for(int i = 0; i< 5 ;i++ ){
    //     ptrExArray[i].x = i;
    //     ptrExArray[i].y = i*i;
    //     ptrExArray[i].print();


    // }

    // delete[] ptrExArray;

    //delete[] ptrArray;

    int** ptr2DArray = new int* [5];

    for(int i = 0; i<5 ; i++){
        ptr2DArray[i] = new int[5];
    }

    for(int i =0 ; i<5 ;i++){
        for(int j = 0; j<5 ; j++){
            ptr2DArray[i][j] = 2;
        }
    }

    return 0;
}