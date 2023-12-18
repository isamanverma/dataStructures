#include <iostream>
using namespace std;

int duplicate_Method1(int arr[], int size)
{
    int newSize = size * 2 - 1;
    int dummyArr[newSize];
    for (int i = 0; i < size; i++)
    {
        dummyArr[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        dummyArr[size + i] = i + 1;
    }
    int answer = 0;
    for (int i = 0; i < newSize; i++)
    {
        answer ^= dummyArr[i];
    }
    return answer;
}

int duplicate_Method2(int arr[], int size)
{
    int answer = 0;
    for (int i = 0; i < size; i++)
        answer ^= arr[i];
    for (int i = 1; i < size; i++)
        answer ^= arr[i];
    return answer;
}

int main(void)
{
    // arr with size 6 and element 0,1,2...(6-1)
    int arr[6] = {1, 2, 3, 4, 5, 1};
    cout << "⭐️ arr = [ ";
    for (int i : arr)
        cout << i << " ";
    cout << "]" << endl
         << "Duplicate element (method 1): " << duplicate_Method1(arr, 6) << endl;

    cout << "Duplicate element (method 2): " << duplicate_Method2(arr, 6) << endl;
    return 0;
}