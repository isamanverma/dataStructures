// an = a + (n-1)d

#include <iostream>
using namespace std;

int nthTermOfAP(int n, int a, int d)
{
    return (a + (n - 1) * d);
}

int main(void)
{
    cout << nthTermOfAP(6, 3, 7);
    return 0;
}