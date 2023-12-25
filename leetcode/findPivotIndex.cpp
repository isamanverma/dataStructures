#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int sumOfArr(vector<int> &nums, int start, int end)
{
    int sum = 0;
    for (int i = start; i < end + 1; i++)
    {
        sum += nums[i];
    }
    return sum;
}

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int left = sumOfArr(nums, 0, i - 1);
        int right = sumOfArr(nums, i + 1, n - 1);
        if (left == right)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    vector<int> arr = {2, 1, -1};
    cout << pivotIndex(arr) << endl;
    return 0;
}