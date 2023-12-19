#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    if (n < 0)
    {
        return false;
    }
    int k = n;
    int answer = 0;
    while (n)
    {
        answer = answer * 10 + (n % 10);
        n /= 10;
    }
    if (answer == k)
        return true;
    else
        return false;
}

int main(void)
{
    int x = -121;
    cout << isPalindrome(x);
    return 0;
}