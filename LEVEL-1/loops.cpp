#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    // while loop
    while (i <= n)
    {
        // print
        cout << i << " ";
        i++;
    }
    cout << endl;

    // sum of n numbers
    int x;

    int sum = 0;
    int j = 1;
    cout << "Enter a number: ";
    cin >> x;
    while (j <= x)
    {
        sum = sum + j;
        j++;
    }
    cout << "Sum of first " << x << " numbers is: " << sum << endl;

    // number prime or not
    int num, k = 2;
    cout << "Enter a number: ";
    cin >> num;
    int count = 0;

    while (k < num)
    {
        if (num % k == 0)
        {
            cout << "Number is not prime" << endl;
            count++;
            break;
        }
        k++;
    }
    if (count == 0)
    {
        cout << "Number is prime " << endl;
    }
}