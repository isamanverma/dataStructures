#include <cstdint>
#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{
    int numOfOne = 0;
    for (int i = 1U << 31; i > 0; i >>= 1)
    {
        if ((i & n) != 0)
            numOfOne++;
    }
    return numOfOne;
}

int main()
{
    cout << hammingWeight(00000000000000000000000000001011);
    return 0;
}
