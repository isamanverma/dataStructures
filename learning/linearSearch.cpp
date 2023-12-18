#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main(void)
{
    int arr[10] = {10, 3, 4, 2, 12, 3, 12, 22, 1, 99};
    cout << "Enter the key: ";
    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);
    (found) ? cout << "Found" : cout << "Not found";
    cout << endl;
    return 0;
}