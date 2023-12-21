#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<vector<int>> threeSum_Method1(vector<int> &nums) // TLE
{
    vector<vector<int>> ans;
    set<vector<int>> setAns;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                vector<int> triplet;
                if ((nums[i] + nums[j] + nums[k]) == 0)
                {
                    triplet.emplace_back(nums[i]);
                    triplet.emplace_back(nums[j]);
                    triplet.emplace_back(nums[k]);
                    sort(triplet.begin(), triplet.end());
                    setAns.insert(triplet);
                }
            }
        }
    }
    ans.assign(setAns.begin(), setAns.end());
    return ans;
}

vector<vector<int>> threeSum_Method2(vector<int> &nums)
{
    set<vector<int>> st;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        set<int> hashSet;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(nums[i] + nums[j]);
            if (hashSet.find(third) != hashSet.end())
            {
                vector<int> triplet = {nums[i], nums[j], third};
                sort(triplet.begin(), triplet.end());
                st.insert(triplet);
            }
            hashSet.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> threeSum_Method3(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && (nums[i] == nums[i - 1]))
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                vector<int> triplet = {nums[i], nums[j], nums[k]};
                ans.emplace_back(triplet);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k - 1])
                    k--;
            }
            else if (sum > 0)
            {
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
        }
    }
    return ans;
}

vector<vector<int>> threeSum_Method4(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && (nums[i] == nums[i - 1]))
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                vector<int> triplet = {nums[i], nums[j], nums[k]};
                ans.emplace_back(triplet);
                while (j < k && nums[j] == nums[j + 1])
                {
                    j++;
                }
                while (j < k && nums[k] == nums[k - 1])
                {
                    k--;
                }
                j++;
                k--;
            }
            else if (sum > 0)
            {
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
        }
    }
    return ans;
}

int main(void)
{
    // vector<int> arr = {0,4,1,2,-1,-4};
    vector<int> arr = {-2, 0, 1, 1, 2};

    for (vector<int> i : threeSum_Method4(arr))
    {
        for (int p : i)
        {
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}