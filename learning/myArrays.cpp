#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(void)
{
    int arr[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> arr[i];
    }
    cout << "Sum of all the elements of array: " << sumOfArray(arr, 5) << endl;
    return 0;
}