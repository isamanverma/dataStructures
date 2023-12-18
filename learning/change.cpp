#include <iostream>
using namespace std;

int main(void)
{
    cout << "Enter amount: ";
    int n;
    cin >> n;
    int hundreds = 0;
    int fifties = 0;
    int twenties = 0;
    int ones = 0;

    if (n > 100)
    {
        hundreds = n / 100;
        n = n % 100;
    }
    if (n > 50 && n < 100)
    {
        fifties = n / 50;
        n = n % 50;
    }
    if (n > 20 and n < 50)
    {
        twenties = n / 20;
        n = n % 20;
    }
    if (n < 20)
    {
        ones = n;
        n = n % 1;
    }

    cout << "Hundreds: " << hundreds << endl;
    cout << "Fifties: " << fifties << endl;
    cout << "Twenties: " << twenties << endl;
    cout << "Ones: " << ones << endl;

    return 0;
}