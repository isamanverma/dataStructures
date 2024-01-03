/*
arr of Books = {50, 60, 80}; -- each element is the number of pages of the book at ith place
no. of students = m
Condition of allocation:
1. Each students gets atleast one book
2. Each book gets allocated
3. Book allocation should be in continuous manner

allocate the books in such a way that max. no. of pages allocated to a student is minimum
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossibleSol(vector<int> &arr, int m, int mid)
{
    int n = arr.size();
    int student = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocate(vector<int> &arr, int m)
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
    vector<int> arr = {10, 20, 30, 40};
    // vector<int> arr = {5, 5, 5, 5};
    int m = 3;
    cout << allocate(arr, m) << endl;
    return 0;
}