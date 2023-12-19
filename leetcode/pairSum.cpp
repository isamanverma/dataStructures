#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> pair;
                pair.emplace_back(min(arr[i], arr[j]));
                pair.emplace_back(max(arr[i], arr[j]));
                ans.emplace_back(pair);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(void)
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int s = 5;
    for (vector<int> pair : pairSum(arr, s))
    {
        for (int i : pair)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}