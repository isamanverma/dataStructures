#include <iostream>
using namespace std;

void power(int a, int b)
{
    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer *= a;
    }
    cout << a << "^" << b << " = " << answer << endl;
}

int main(void)
{
    power(2, 3);
    power(12, 2);
    return 0;
}