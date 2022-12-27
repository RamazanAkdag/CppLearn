#include <iostream>
using namespace std;


class Array{
    protected:
        int* data;
        int size;
        int capacity;
    public:
        Array(int user_capacity = 5){
            capacity = user_capacity;
            data = new int[capacity];
            size = 0;
            cout<<"new int array is created with capacity"<<capacity<<endl;
        }
        ~Array(){
            delete[] data;
            cout<<"array destroyed.."<<endl;
        }
        Array(const Array& copyArray){
            size = copyArray.size;
            capacity = copyArray.capacity;
            data = new int[capacity];
            for(int i = 0;i<copyArray.size;i++){
                data[i] = copyArray.data[i];
            }
        }
        void addItem(int number){
            if(size == capacity){
               int* tempData = new int[capacity*2];
               for(int i = 0 ; i < size ;i++){
                tempData[i] = data[i];
               }
               delete[] data;
               data = tempData;
               capacity *= 2;
            }
            data[size] = number;
            size++;
        }
        void printItems(){
            if(size != 0){
                for (int i = 0; i < size; i++)
                {
                    cout<<"index "<<i<<" : "<<data[i]<<endl;
                }
                
            }
        }
        void removeIndexItem(int index){
            if(index < 0 || index > capacity){
                cout<<"ERROR - there is wrong index"<<endl;
                return;
            }
            for(int i = index; i<size ;i++){
                data[i] = data[i+1];
            }
            size--;
        }

        

};