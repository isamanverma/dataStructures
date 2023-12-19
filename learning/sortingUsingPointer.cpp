#include <iostream>
#include <vector>
using namespace std;

vector<int> sortNumbers(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (arr[j] == 2)
        {
            j--;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 0)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[j]);
        }
    }
    j = arr.size() - 1;
    i += 1;
    while (i < j)
    {
        if (arr[j] == 2)
        {
            j--;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[j]);
        }
    }
    return arr;
}

int main(void)
{
    vector<int> arr = {0, 1, 2, 1, 1, 0, 0, 1, 2, 1, 0};
    for (int i : sortNumbers(arr))
        cout << i << " ";
    return 0;
}