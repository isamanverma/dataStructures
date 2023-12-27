#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossibleSol(vector<int> &arr, int m, int mid)
{
    int n = arr.size();
    int painter = 1;
    int areaSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (areaSum + arr[i] <= mid)
        {
            areaSum += arr[i];
        }
        else
        {
            painter++;
            if (painter > m || arr[i] > mid)
                return false;
            else
            {
                areaSum = arr[i];
            }
        }
    }
    return true;
}

int partition(vector<int> &arr, int m)
{
    int n = arr.size();
    int start = 0;
    int sum = 0;
    for (int i : arr)
    {
        sum += i;
    }
    int end = sum;
    int mid = start + ((end - start) >> 1);
    int ans = -1;
    while (start <= end)
    {
        if (isPossibleSol(arr, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) >> 1);
    }
    return ans;
}

int main(void)
{
    vector<int> arr = {5, 5, 5, 5};
    int k = 2;
    cout << partition(arr, k) << endl;
    return 0;
}