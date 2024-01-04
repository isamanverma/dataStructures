#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    // There are n-1 passes
    // In each pass, we find the smallest element in the unsorted array and swap it with the first element
    // Unsorted array means i+1 to n;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             swap(arr[j], arr[i]);
    //         }
    //     }
    // }
}

// ⭐️ Efficiency:
// The first approach keeps track of the index of the minimum element and swaps only once after finding the minimum in the inner loop.
// The second approach swaps elements directly whenever a smaller element is found in the inner loop.

// ⭐️ Comparisons:
// The first approach potentially makes fewer comparisons as it only swaps once after finding the minimum, whereas the second approach swaps elements immediately.

int main(void)
{
    vector<int> arr = {3, 4, 2, 5, 6, 1, 9};
    cout << "Unsorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}