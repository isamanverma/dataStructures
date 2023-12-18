// Sum of AP = n/2(2a + (n-1)*d )

#include <iostream>
using namespace std;

int sumOfAP(int n, int a, int d)
{
    return ((n * (2 * a + (n - 1) * d)) / 2);
}

int main(void)
{
    cout << sumOfAP(6, 3, 7) << endl;
    return 0;
}