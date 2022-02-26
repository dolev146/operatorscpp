#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = b;
    a += 2;
    cout << a << endl;

    // conditioanl ternart operator ( ? )

    a = 2;
    b = 7;
    int c = (a > b) ? a : b;
    cout << c << '\n';

    // comma operator ( , )

    a = (b = 3, b + 2);

    cout << a << endl;

    // a will get 5 while b will remain 3  ^^

    // bitwise operators  ( &, |, ^, ~, <<, >> )

    // https://www.cplusplus.com/doc/tutorial/operators/

    // casting both ways are the same
    int i;
    float f = 3.14;
    i = (int)f;
    i = int(f);

    // size of
    int x;
    // compile time size of  , before program execution
    x = sizeof(char);

    // can have multiple opertors
    x = 5 + 7 % 2;
    


}