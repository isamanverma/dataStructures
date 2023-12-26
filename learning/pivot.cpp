#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int getPivot(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(void)
{
    vector<int> arr = {8, 10, 17, 1, 3};
    cout << getPivot(arr) << endl;
    return 0;
}