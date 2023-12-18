#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        long fibNum = a + b;
        cout << fibNum << " ";
        a = b;
        b = fibNum;
    }
    return 0;
}