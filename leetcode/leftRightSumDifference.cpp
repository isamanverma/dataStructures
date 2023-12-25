#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

vector<int> leftRightDifference(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    int left = 0, right = 0;

    for (int i : nums)
    {
        right += i;
    }
    right = right - nums[0];
    for (int i = 0; i < n; i++)
    {
        ans.emplace_back(abs(left - right));
        cout << left << " " << right << endl;
        left += nums[i];
        if (i < n - 1)
        {
            right -= nums[i + 1];
        }
    }
    return ans;
}
int main(void)
{
    vector<int> arr = {10, 4, 8, 3};
    for (int i : leftRightDifference(arr))
        cout << i << " ";
    return 0;
}