#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> triplet;
                    triplet.emplace_back(arr[i]);
                    triplet.emplace_back(arr[j]);
                    triplet.emplace_back(arr[k]);
                    ans.push_back(triplet);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(void)
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int s = 12;

    for (vector<int> pair : tripletSum(arr, s))
    {
        for (int i : pair)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}