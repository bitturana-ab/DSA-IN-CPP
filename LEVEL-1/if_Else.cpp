#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // cout << "Value of n is: " << n << endl;

    // number is positive or negative

    if (n > 0)
    {
        cout << "Number is positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Number is negative" << endl;
    }
    else
    {
        cout << "Number is zero" << endl;
    }

    // enter two numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Numbers are: " << a << " " << b << endl;

    // find ASCII value of a character
    int asc;
    asc = cin.get();
    cout << "ASCII value : " << asc << endl;

    // check if the character is upper case, lower case, numerical or something else
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    // int ascii = int(user_input);
    int ascii = ch;

    if (ascii >= 65 && ascii <= 90)
    {
        cout << "Upper Case: " << ch << endl;
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        cout << "Lower Case: " << ch << endl;
    }
    else if (ascii >= 48 && ascii <= 57)
    {
        cout << "Numerical: " << ch << endl;
    }
    else
    {
        cout << "something else: " << ch << endl;
    }
}
