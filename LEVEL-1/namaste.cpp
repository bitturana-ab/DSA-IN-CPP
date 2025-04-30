#include <iostream>
using namespace std;
int main()
{
    cout << "Namaste Duniya!" << endl; // Output "Namaste Duniya!" to the console

    int a = 5;                           // Declare an integer variable 'a' and initialize it to 5
    cout << "Value of a: " << a << endl; // Output the value of 'a' to the console

    char b = 'A';                        // Declare a character variable 'b' and initialize it to 'A'
    cout << "Value of b: " << b << endl; // Output the value of 'b' to the console

    bool c = true;                       // Declare a boolean variable 'c' and initialize it to true
    cout << "Value of c: " << c << endl; // Output the value of 'c' to the console
    // Note: 'boolean' should be replaced with 'bool' in C++ for correct syntax

    cout << "size of a= " << sizeof(a) << endl; // Output the size of 'a' in bytes
    cout << "size of b= " << sizeof(b) << endl; // Output the size of 'b' in bytes
    cout << "size of c= " << sizeof(c) << endl; // Output the size of 'c' in bytes

    // type casting
    int ab = 'a';

    // 'a' is a character, and when assigned to an integer, it gets converted to its ASCII value
    // The ASCII value of 'a' is 97, so ab will be 97
    cout << ab << endl;
    char ab1 = 98; // 'ab1' is a character initialized with the ASCII value of 98
    cout << ab1;   // Output the character corresponding to ASCII value 98, which is 'b'

    cout << endl;

    // Arithmetic operations and type casting
    int x = 2 / 4;
    cout << x << endl;       // Output the result of integer division 2/4, which is 0
    cout << 2 / 5 << endl;   // Output the result of integer division 2/5, which is 0
    cout << 2.0 / 5 << endl; // Output the result of floating-point division 2.0/5, which is 0.4
    float y = 2.0 / 5;       // Declare a float variable 'y' and initialize it with the result of 2.0/5
    cout << y << endl;       // Output the value of 'y', which is 0.4

    // relational operations
    int a2 = 3, b2 = 4;         // Declare two integer variables 'a' and 'b' and initialize them to 3 and 4 respectively
    cout << (a2 == b) << endl;  // Output the result of the comparison 'a==b', which is false (0)
    cout << (a2 < b2) << endl;  // Output the result of the comparison 'a<b', which is true (1)
    cout << (a2 > b2) << endl;  // Output the result of the comparison 'a>b', which is false (0)
    cout << (a2 <= b2) << endl; // Output the result of the comparison 'a<=b', which is true (1)
    cout << (a2 >= b2) << endl; // Output the result of the comparison 'a>=b', which is false (0)
    cout << (a2 != b2) << endl; // Output the result of the comparison 'a!=b', which is true (1)
}