#include <iostream>
#include <vector>
using namespace std;

vector<int> sortZeroOnes(vector<int> &arr)
{
    int i = 0, j = (arr.size() - 1);
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}

int main(void)
{
    vector<int> arr = {0, 1, 0, 1, 1, 1};
    for (int i : sortZeroOnes(arr))
        cout << i << " ";
    return 0;
}