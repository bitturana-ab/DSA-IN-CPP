#include <iostream>
using namespace std;
int main()
{
    // int arr[100] = {0}; // all initialize with zero
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int name[10]; // garbeg value asign auto
    for (int i = 0; i < 10; i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
    int num[10] = {1, 2};
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
}