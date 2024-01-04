#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        for (int j = 0; j < n - i - 1; j++) // n-i-1 comparisons
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(void)
{
    vector<int> arr = {10, 1, 7, 6, 14, 9};

    cout << "Unsorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    bubbleSort(arr);

    cout << "Sorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}