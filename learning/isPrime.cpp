#include <iostream>
using namespace std;

int main(void)
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < (n - 1); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    isPrime ? cout << "Prime" : cout << "Not Prime";
    return 0;
}