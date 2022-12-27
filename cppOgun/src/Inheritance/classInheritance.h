#include <iostream>

using namespace std;

class baseClass{
    public:

    int x;

    void setX(int mainX){
        this->x = mainX;
    }
    int getX()const{
        return x;
    }

    void print(){
        cout<<"x : "<< x <<endl;
    }
    baseClass(int mainX = 0){
        x = mainX;
        cout<<"base class constructor worked..."<<endl;
    }
    ~baseClass(){
        cout <<"base class destructor worked..."<<endl;
    }
    baseClass(const baseClass&oth){
        x = oth.x;
        cout<<"base class copy constructor worked"<<endl;
    }



};

class derivedClass:public baseClass{//public olarak miras alınırsa miras alınan özellikler diger classların icinde de erişilebilir 

//private seklinde miras alındıysa ve miras alınan classda public veya protected olarak tanımlandıysa o özellikler private olarak gecer
//sadece bu classın icinden erisilebilir

//protected seklinde alınırsa ise hem bu classtan hem extend edilen classtan erisim var baska classtan erisim yok

/*eger mirascı bir sınıftan bir nesne turetmek isterseniz ilk olaraök miras aldıgınız sınıfın constructoru calısır
destructorda durum tam tersi olur. silinecek nesnenin ilk önce kendi sınıfının destructoru calısır sonra özelliklerini miras aldıgı sınıfınki calısır
 */
public:
int y;

    void setY(int mainY){
        this->y = mainY;
    }
    int getY()const{
        return y;
    }

    void print(){
        cout<<"y : "<< y <<endl;
    }
    derivedClass(int mainX,int mainY = 0):baseClass(mainX) {
        //derived classtan nesne turetilicegi zaman once baseclasssın consturcoru calısacagı icin mainX degeri orada bi tur atanıyor
        //iki kere atama yapmaya gerek olmadıgı icin mainX degerini 1. constructordan alsın. ve asagıdan mainX atamasını kaldıralım
        //x = mainX;
        y = mainY;
        cout<<"derived class constructor worked..."<<endl;
    }
    ~derivedClass(){
        cout<<"derived class destructor worked..."<<endl;
    }
    derivedClass(const derivedClass& oth){
        x = oth.x;
        y = oth.y;
        cout<<"derived class copy consturctor worked..."<<endl;
    }

};

class AClass{
    public:
        AClass(){
            
        }





};