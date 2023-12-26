#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int sqrtBinSearch(int sq)
{
    int start = 0, end = sq, mid = start + ((end - start) >> 1);
    int ans = 0;
    {
        while (start < end)
        {
            if (mid * mid == sq)
            {
                return mid;
            }
            else if (mid * mid < sq)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + ((end - start) >> 1);
        }
    }
    return ans;
}

double morePricisionSqrt(int sq, int precision, int integerSqrt)
{
    double factor = 1;
    double ans = integerSqrt;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // factor = 0.1
        // factor = 0.01
        // factor = 0.001
        for (double j = ans; j * j < sq; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(void)
{
    int sq = 2;
    cout << "Integer root: " << sqrtBinSearch(sq) << endl;
    cout << "Precise root: "<<morePricisionSqrt(sq, 5, sqrtBinSearch(sq)) << endl;
    return 0;
}