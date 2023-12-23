#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int firstOcc(vector<int> arr, int k)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int> arr, int k)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPos(vector<int> &arr, int k)
{
    return make_pair(firstOcc(arr, k), lastOcc(arr, k));
}

int main(void)
{
    vector<int> arr = {0, 5, 5, 6, 6, 6};
    // cout << lastOcc(arr, 5);
    int k = 1;
    cout << firstAndLastPos(arr, k).first << " " << firstAndLastPos(arr, k).second;

    return 0;
}