#include <iostream>
#include <vector>

using namespace std;

bool isPossibleSol(vector<int> &arr, int k, int mid)
{
    int cows = 1;
    int lastPosition = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            // place the cow
            cows++;
            if (cows == k)
            {
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int agrresiveCows(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = *max_element(arr.begin(), arr.end());
    int mid = start + ((end - start) >> 1);
    int ans = -1;

    while (start < end)
    {
        if (isPossibleSol(arr, k, mid))
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
    return ans;
}

int main(void)
{
    vector<int> arr = {4, 2, 1, 3, 6};
    int k = 2;
    cout << agrresiveCows(arr, k) << endl;
    return 0;
}