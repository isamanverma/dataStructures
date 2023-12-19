#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &arr1, int &size1, vector<int> arr2, int &size2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            ans.emplace_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
    }
    return ans;
}

int main(void)
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    int size1 = arr1.size();
    sort(arr1.begin(), arr1.end());

    vector<int> arr2 = {2, 2, 3, 3};
    int size2 = arr2.size();
    sort(arr2.begin(), arr2.end());

    for (int i : intersection(arr1, size1, arr2, size2))
        cout << i << " ";
    return 0;
}