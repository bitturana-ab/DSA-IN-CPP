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
    //     int last_bit = n & 1; // 0101 & 1 (each time last one bit aquire after right shifting)
    //     ans = ans * 10 + last_bit;
    //     // ans = (bit * pow(10, i) + ans);
    //     n = n >> 1; // one bit right shift of binary of n
    //     i++;
    // }
    // cout << "Answer is: " << ans << endl;

    // print as it is number
    // int n = 132;
    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     // ans = ans * 10 + digit; // reverse cause last digit
    //     ans = (digit * pow(10, i) + ans);
    //     n = n / 10;
    //     i++;
    // }

    // cout << "Number is " << ans << endl;

    // reverse a number
    // int n = 7835392;
    // int n1 = n;      // for print
    // int rev_num = 0; // initialize with 0
    // while (n != 0)
    // {
    //     int rem_digit = n % 10; // get last digit of n
    //     rev_num = (rev_num * 10) + rem_digit;
    //     n = n / 10; // cut last digit of n
    // }
    // cout << "Reverse of " << n1 << " : " << rev_num << endl;

    // binary to decimal
    // int n;
    // cout << "Enter binary digits: "; // binary as an integer i will optimize in next level
    // cin >> n;
    // int i = 0, ans = 0;
    // while (n != 0)
    // {
    //     int last_bit = n % 10; // 0 || 1
    //     if (last_bit == 1)
    //     {
    //         ans = ans + pow(2, i);
    //     }
    //     n = n / 10;
    //     i++;
    // }
    // cout << ans << endl;

    // reverse an integer for leetcode
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        ans = ans * 10 + last_digit;
        n = n / 10;
    }
    cout << ans << endl;
}