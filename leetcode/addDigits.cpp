#include <iostream>
using namespace std;

int addDigits(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    if (sum < 10)
        return sum;
    else
        return addDigits(sum);
}

int main(void)
{
    // cout << numDigits(138);
    cout << addDigits(138) << endl;
    return 0;
}