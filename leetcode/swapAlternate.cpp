#include <iostream>
using namespace std;

void swapAlternate_Method1(int arr[], int size)
{
    if (size % 2 == 0)
        for (int i = 0; i < size; i = i + 2)
            swap(arr[i], arr[i + 1]);
    else
        for (int i = 0; i < size - 1; i = i + 2)
            swap(arr[i], arr[i + 1]);
}

void swapAlternate_Method2(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        // check for the index+1 to be less than size before swapping
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }
}

int main(void)
{
    int arr[] = {10, 23, 12, 33, 45, 63, 62};
    int size = sizeof(arr) / sizeof(arr[1]);
    cout << "Array before alternate swap: ";
    for (int i : arr)
        cout << i << " ";

    cout << endl;

    swapAlternate_Method1(arr, size);
    cout << "Array after alternate swap (method 1): ";
    for (int i : arr)
        cout << i << " ";

    cout << endl;

    swapAlternate_Method2(arr, size);
    cout << "Array after alternate swap (method 2): ";
    for (int i : arr)
        cout << i << " ";

    return 0;
}