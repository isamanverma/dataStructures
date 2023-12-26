#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int pivotIndex(vector<int> &arr)
{
    int n = arr.size();
    int start = 0, end = n - 1, mid = start + ((end - start) >> 1);
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) >> 1);
    }
    return start;
}

int binarySearch(vector<int> &arr, int target, int s, int e)
{
    int start = s, end = e, mid = start + ((end - start) >> 1);
    while (start < end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) >> 1);
    }
    return -1;
}

int search(vector<int> &arr, int target)
{
    int n = arr.size();
    int pivot = pivotIndex(arr);
    if (arr[pivot] <= target && target < arr[n - 1])
    {
        return binarySearch(arr, target, pivot, n - 1);
    }
    else
    {
        return binarySearch(arr, target, 0, pivot - 1);
    }
}

int main(void)
{
    vector<int> arr = {8, 10, 17, 1, 3};
    cout << search(arr, 1) << endl;
    return 0;
}