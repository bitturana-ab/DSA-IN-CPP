#include <iostream>
using namespace std;
int power()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
// return 1 ->even 0->odd
bool isEven()
{
    int num;
    cout << "Enter a number for even or odd: ";
    cin >> num;

    if (num & 1) // last bit 1 then odd
    {
        return 0;
    }

    return 1;
}
// nCr formula
// [nCr = n!/r!*(n-r)!]
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int nume = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return nume / denom;
}

// prime number checking
bool isPrime(int n) // function signature
{
    // function defination
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0; // not prime
        }
    }
    return 1; // prime
}
int main()
{
    //     cout << power() << endl;
    //     if (isEven()) // function call and return 0|1
    //     {
    //         cout << "Number is even." << endl;
    //     }
    //     else
    //     {
    //         cout << "Number is odd." << endl;
    //     }

    cout << nCr(8, 2) << endl;
    cout << nCr(7, 4) << endl;

    // prime checking function call
    if (isPrime(5))
    {
        cout << "Prime number." << endl;
    }
    else
    {
        cout << "Not a prime number." << endl;
    }

    return 0;
}