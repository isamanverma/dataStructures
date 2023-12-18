#include <iostream>
using namespace std;

int numberOfSetBits(int a)
{
    int setBits = 0;
    for (int i = 0; i < 32; i++)
    {
        while (a != 0)
        {
            if ((a & 1) == 1)
            {
                setBits += 1;
            }
            a = a >> 1;
        }
    }
    return setBits;
}

int totalNumberOfSetBits(int a, int b)
{
    return (numberOfSetBits(a) + numberOfSetBits(b));
}

int main(void)
{
    cout << totalNumberOfSetBits(2, 3) << endl;
    return 0;
}