#include <iostream>
using namespace std;
int main()
{
    // before run this program comments all block except one

    /*
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
    int row = 1;
    while (row <= n1)
    {
        int j = 1;
        while (j <= n1)
        {
            cout << row << " ";
            j++;
        }
        cout << endl;
        row++;
    }

    // pattern for 1 2 3 4 .. n printing in each row
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        row++;
    }

    // pattern for n... 3,2,1 printing in each row
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << n - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    // 1,2,3,4
    // 5,6,7,8
    // 9,10,11,12
    // 13,14,15,16

    int num2;
    cout << "Enter a number: ";
    cin >> num2;
    int row = 1;
    int count3 = 1;
    while (row <= num2)
    {
        int col = 1;
        while (col <= num2)
        {
            cout << count3 << " ";
            col++;
            count3++;
        }
        cout << endl;
        row++;
    }

    // triangle pattern printing
    int triangle;
    cout << "Enter number of trianle rows: ";
    cin >> triangle;
    int row = 1;
    while (row <= triangle)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }

    // 1,22,333,4444,55555 printing pattern
    int n3;
    cout << "Enter number of rows: ";
    cin >> n3;
    int i5 = 1;
    while (i5 <= n3)
    {
        int col = 1;
        while (col <= i5)
        {
            cout << i5 << " ";
            col++;
        }
        cout << endl;
        row
    }

    // 1
    // 2,3
    // 4,5,6

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    // 1
    // 2 3
    // 3 4 5

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int count = row;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    // 1
    // 2 1
    // 3 2 1

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = row;
        while (col >= 1)
        {
            cout << col << " ";
            col--;
        }
        cout << endl;
        row++;
    }


    // A A A
    // B B B
    // C C C
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row - 1; // ASCII value of A is 65
            cout << ch << " ";
            // cout << char(row + 64) << " ";
            // cout << 'A' + row - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }


    // A B C
    // A B C

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col - 1; // ASCII value of A is 65
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }


    // A B C
    // D E F
    // G H I

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    char ch = 'A';
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch << " ";
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }


    // A B C
    // B C E
    // C D E

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row - 1;
        // char ch = 'A' + row + col - 2;
        while (col <= n)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }


    // A
    // B B
    // C C C
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1; // ASCII value of A is 65
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    // A
    // B C
    // D E F
    // G H I J

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    char ch = 'A' + row - 1; // ASCII value of A is 65
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {

            cout << ch << " ";
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }


    // A
    // B C
    // C D E
    // D E F G

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row - 1;
        while (col <= row)
        {
            cout << ch << " ";
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }
    */
}
