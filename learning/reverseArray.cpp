#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(void)
{
    int arr[] = {90, 33, 10, 23, 45, 26};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i : arr)
    {
        cout << i << " ";
    }
    reverseArr(arr, size);
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}