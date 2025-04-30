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

    // pattern for square * printing
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    int i1 = 1;
    while (i1 <= row)
    {
        int j = 1;
        while (j <= row)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i1++;
    }

    // pattern for 1 1 1 1 ,2 2 2 2 ... n n n n number printing
    int n1;
    cout << "Enter number of levels: ";
    cin >> n1;
    int i2 = 1;
    while (i2 <= n1)
    {
        int j = 1;
        while (j <= n1)
        {
            cout << i2 << " ";
            j++;
        }
        cout << endl;
        i2++;
    }

    // pattern for 1 2 3 4 .. n printing in each row
    int row1;
    cout << "Enter number of rows: ";
    cin >> row1;
    int count1 = 1;
    while (count1 <= row1)
    {
        int j = 1;
        while (j <= row1)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        count1++;
    }
}