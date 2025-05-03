#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // binary to decimal
    // 1,2,3 => 321
    // ans = 0 , i =0 ;
    // reverse formula for digits => [ans = (digit * 10^i) + ans]
    // 1,2,3 => 123
    // ans = 0;
    // digits concate => [ans = ( ans*10 ) + digit]

    // decimal to binary
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;                // 0101 & 1 (each time last one bit aquire after right shifting)
    //     ans = (bit * pow(10, i) + ans); // store in integer in reverse order of 1 -> 0 -> 1 -> 0
    //     n = n >> 1;                     // one bit right shift
    //     i++;
    // }
    // cout << "Answer is: " << ans << endl;

    // print as it is number
    int n = 132;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = (digit * pow(10, i) + ans);
        n = n / 10;
        i++;
    }

    cout << "Number is " << ans << endl;

    // reverse a number
    int num = 893247;
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    cout << rev_num << endl;
}