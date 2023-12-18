#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    while (n != 0)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        n--;
    }
}

int main(void)
{
    fib(15);
    return 0;
}