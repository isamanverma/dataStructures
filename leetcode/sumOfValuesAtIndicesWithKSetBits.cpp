#include <iostream>
using namespace std;

int numSetBits(int num)
{
    int setBit = 0;
    while (num != 0)
    {
        if ((num & 1) == 1)
            setBit++;
        num = num >> 1;
    }
    return setBit;
}

int sumIndicesWithKSetBits(vector<int> &nums, int k)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (numSetBits(i) == k)
            ans = ans + nums[i];
    }
    return ans;
}

int main(void)
{
    vector<int> arr = {5, 10, 1, 5, 2};
    cout << sumIndicesWithKSetBits(arr, 1) << endl;

    return 0;
}