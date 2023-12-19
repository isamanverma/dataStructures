#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // for sort
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    set<vector<int>> uniqueTriplets;
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> triplet = {arr[i], arr[j], arr[k]};
                    sort(triplet.begin(), triplet.end());
                    uniqueTriplets.insert(triplet);
                }
            }
        }
    }
    ans.assign(uniqueTriplets.begin(), uniqueTriplets.end());

    return ans;
}

int main(void)
{
    vector<int> arr = {1, 2, 3, 1, 2, 3};
    sort(arr.begin(), arr.end());
    int s = 6;

    for (vector<int> triplet : tripletSum(arr, s))
    {
        for (int i : triplet)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
