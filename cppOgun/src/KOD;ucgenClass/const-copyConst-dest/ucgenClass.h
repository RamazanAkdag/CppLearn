#include <iostream>
#include <math.h>


using namespace std;

class ucgen{
    public:

    ucgen(float a,float b,float c);

    ucgen();

    ~ucgen();

    ucgen(const ucgen &oth);

    bool isTriangle(float a,float b,float c);

    float getSideA() const{
        return sideA;
    }

    float getSideB() const{
        return sideB;
    }

    float getSideC() const{
        return sideC;
    }

    void setValue(float a,float b,float c);

    bool isEquilateral();//eskenar
    bool isScalene();
    bool isIsosceles();

    void triangleType();

    float calculateArea();


    private:
    float sideA,sideB,sideC;
};


void ucgen::setValue(float a,float b,float c){
     while(!isTriangle(a,b,c)){
        cout<<"please enter the sides...( a - b - c )"<<endl;
        cin>>a>>b>>c;
    }
    sideA = a;
    sideB = b;
    sideC = c; 
    cout<<"triangle created...\n"<<endl;
}

bool ucgen::isEquilateral(){
    if(sideA == sideB && sideA == sideC && sideB == sideC)
        return true;
    
    return false;
}

bool ucgen::isScalene(){
    if(sideA != sideB && sideA != sideC && sideB != sideC){
        return true;
    }
    return false;
}

float ucgen::calculateArea(){
    float area;
    if(isEquilateral()){
        area = pow(sideA,2)*sqrt(3)/4;
    }
    float s = (sideA + sideB + sideC)/2;
    area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
    return area;
     
}

bool ucgen::isIsosceles(){
    if((sideA == sideB && sideC != sideA) || (sideA == sideC && sideB != sideA) || (sideB == sideC && sideA != sideB)){
        return true;
    }
    return false;
}

void ucgen::triangleType(){
    if(isEquilateral()){
        cout<<"this triangle is equilateral"<<endl;
    }
    if(isScalene()){
        cout<<"this triangle is Scalene"<<endl;
    }
    if(isIsosceles()){
        cout<<"this triangle is Isoceles"<<endl;
    }
}


bool ucgen::isTriangle(float a,float b,float c){
    if(!(abs(b - c) < a && (b+c > a)) ){
        cout<<"invalid side lengths..."<<endl;
        return false;
    }
     if(!(abs(a - c) < b && (a+c > b)) ){
        cout<<"invalid side lengths..."<<endl;
        return false;
    }
     if(!(abs(b - a) < c && (b+a > c)) ){
        cout<<"invalid side lengths..."<<endl;
        return false;
    }
    return true;

}
ucgen::~ucgen(){
    cout<<"triangle destroyed"<<endl;
}
ucgen::ucgen(float a,float b,float c){
    while(!isTriangle(a,b,c)){
        cout<<"please enter the sides...( a - b - c )"<<endl;
        cin>>a>>b>>c;
    }
    sideA = a;
    sideB = b;
    sideC = c;

    cout<<"triangle created..."<<endl;
}
ucgen::ucgen(){
    sideA = 0;
    sideB = 0;
    sideC = 0;

    
}
ucgen::ucgen(const ucgen& oth){
    sideA  = oth.sideA;
    sideB = oth.sideB;
    sideC = oth.sideC;

    cout<<"triangle copied to target"<<endl;

}
