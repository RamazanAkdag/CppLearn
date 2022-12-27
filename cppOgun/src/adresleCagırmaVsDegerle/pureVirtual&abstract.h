#include <iostream>
using namespace std;

class Animal

{
public:
   virtual void talk() = 0;

   /*BİR CLASS icerisinde bi tane bile 0 a eşit olan virtual fonksiyon bulunduruyorsa 
   soyut class olur. soyut classlardan nesne türetilemez ama soyut classı miras alan sınıflardan nesne üretilebilir*/
};

class Dog:public Animal{
    public:
        void talk(){
            cout<<"hav hav hav..."<<endl;
        }
    

};

class Cat:public Animal{
    public:
        void talk(){
            cout<<"miyav miyav"<<endl;
        }

};

class Duck: public Animal{
    public:
        void talk(){
            cout<<"vak vak"<<endl;
        }

};


