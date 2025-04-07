#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int v;
    cout << &n << endl;
    int* ptr = &n;
    cout << *ptr << endl;

    *ptr = 10;
    cout << n << endl;
    cout << "the address of n is " << &n << endl;
    cout << "the value of n is " << n << endl;

    int* ptr = &v;
    *ptr = 19;
    cout << "the address of v is " << &v << endl;
    cout << "the value of v is " << v << endl;

    system("pause>0");
    return 0;
}