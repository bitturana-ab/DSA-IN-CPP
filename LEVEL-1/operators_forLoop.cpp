#include <iostream>
using namespace std;
int main()
{
    // BITWISE OPERATORS
    // 1. AND -> &
    // 2. OR -> |
    // 3. NOT -> ~
    // 4. XOR -> ^

    // int a = 4; // 000..0100
    // int b = 6; // 000..0111

    // cout << " a & b = " << (a & b) << endl;
    // cout << " a | b = " << (a | b) << endl;
    // cout << " ~ a = " << ~a << endl;
    // cout << " a ^ b = " << (a ^ b) << endl;

    // left shift || right shift operators
    // left shift
    // 5 << 1 ==> 5 = 0101 => 1010 = 10
    // cout << " 5 << 1 = " << (5 << 1) << endl;
    // // 5 << 2 ==> 5 = 0101 => 0100 = 20
    // cout << " 5 << 2 = " << (5 << 2) << endl;

    // // right shift
    // // 5 >> 1 ==> 5 = 0101 => 010 = 2
    // cout << " 5 >> 1 = " << (5 >> 1) << endl;
    // // 5 >> 2 ==> 5 = 0101 => 01 = 1
    // cout << " 5 >> 2 = " << (5 >> 2) << endl;
    // // 0101 => 0
    // cout << " 5 >> 3 = " << (5 >> 3) << endl;
    // // 0101 =>
    // cout << " 5 >> 4 = " << (5 >> 4) << endl;

    // trick
    // right >> num / 2
    // cout << (5 >> 1) << endl;
    // cout << (18 >> 2) << endl;

    // // left shift << num * 2
    // cout << (3 << 1) << endl;
    // cout << (4 << 2) << endl;

    // int i = 7;
    // cout << (++i) << endl; // pre-increment
    // // print = 8 , i = 8
    // cout << (i++) << endl; // post-increment
    // // print = 8 , i = 9
    // cout << (i--) << endl; // pre-decrement
    // // print = 9 , i = 8
    // cout << (--i) << endl; // post-decrement
    // // print = 7 , i = 7

    // int number = 3;
    // cout << (25 * (++number)) << endl;

    // for loops
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }
    // other way
    // int i = 1;
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i++;
    // }

    // multiple initialization and multiple conditions in for loop
    // for (int a = 0, b = 1; a >= 0 && b >= 0; a--, b--)
    // {
    //     cout << a << " " << b << " " << endl;
    // }

    // sum of n number
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     // sum = sum + i;
    //     sum += i;
    // }
    // cout << "sum of " << n << " is: " << sum << endl;

    // fibonacci series
    // 0 1 1 2 3 5 8 13
    // int n;
    // cout << "Enter a number for steps: ";
    // cin >> n;
    // int back = 0;
    // int next = 1;
    // cout << back << " ";
    // cout << next << " "; // 0 1
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = (back + next); // sum = 0+1
    //     cout << sum << " ";
    //     back = next;
    //     next = sum;
    // }

    // prime number
    int n;
    cout << "Enter a number to check for prime or not: ";
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "Divisible by: " << i << " ";
            cout << "Number is not prime. ";
            count++;
            break;
        }
    }
    if (count <= 0)
    {
        cout << "Number is prime. ";
    }
}
