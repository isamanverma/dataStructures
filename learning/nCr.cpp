#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void nCr(int n, int r)
{
    int answer = factorial(n) / (factorial(r) * factorial((n - r)));
    cout << n << "C" << r << " = " << answer << endl;
}

int main(void)
{
    nCr(8, 2);
    nCr(13, 0);

    return 0;
}