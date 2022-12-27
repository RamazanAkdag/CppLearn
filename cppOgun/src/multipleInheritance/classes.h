#include <iostream>
using namespace std;

class ACLass

{
private:
    /* data */
public:
int a;
    ACLass(){
        cout<<"A class constructor worked..."<<endl;
    }
    ~ACLass
    (){
        cout<<"A class destructor worked..."<<endl;
    }
};

class BClass
{
private:
    /* data */
public:
    int b;
 BClass(){
    cout<<"B class constructor worked.."<<endl;
 }
 ~BClass(){
    cout<<"B class destructor worked..."<<endl;
 }
     
};

class CClass : public ACLass,public BClass{//iki sınıftan miras alınacaksa ikisinin de isminden önce erişim belirleyicisi yazılmalıdır
//ilk önce hangi sınıf yazıldıysa en önce onun constructoru calısır
// override: baska classın özrelliklerini miras alan classın içinde (ata classtan) bir fonksiyonun aynı ismiyle ve parametreleriyle yeniden farklı bir
//biçimde tanımlaması. eger cocuk classın icinden o fonksiyonu calıstırıcak olursan ata classın içindeki fonksiyon ciğnenmiş olur ve sonradan tanımlanan calısır  
    public:
CClass(){
    cout<<"C class constructor worked.."<<endl;
 }
 ~CClass(){
    cout<<"C class destructor worked..."<<endl;
 }

};


