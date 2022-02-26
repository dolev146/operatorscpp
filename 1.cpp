// assignment operator
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << a << endl;
    cout << b << endl;
    a = 10;
    b = 4;
    a = b;
    b = 7;

    cout << "a:";
    cout << a;
    cout << " b:";
    cout << b;

    // this is OK
    int x, y , z;
    y = 2 + (x = 5);

    // the same as above
    x = 5;
    y = 2 + x;

    // this is also ok
    x = y = z = 5;


}