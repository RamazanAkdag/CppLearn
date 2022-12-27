#include <iostream>
using namespace std;
void funOne(int a, int& b, char v)
{
    int one;
    one = a; //Line 9
    a++; //Line 10
    b = b * 2; //Line 11
    v = 'B'; //Line 12
    cout << "Line 13: Inside funOne: a = " << a
    << ", b = " << b << ", v = " << v
    << ", and one = " << one << endl; //Line 13
}
void funTwo(int& x, int y, char& w)
{
    x++; //Line 14
    y = y * 2; //Line 15
    w = 'G'; //Line 16
    cout << "Line 17: Inside funTwo: x = " << x
    << ", y = " << y << ", and w = " << w
    << endl; //Line 17
}
    
int main()
{






    return 0;
}