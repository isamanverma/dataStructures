#include <iostream>
using namespace std;

int main(void)
{
    int arr[] = {2, 3, 1, 6, 3, 6, 2, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Logic: a^a = 0 and 0^a = a

    int answer = 0;
    for (int i = 0; i < size; i++)
    {
        answer ^= arr[i];
    }
    cout << "Unique element is: " << answer << endl;
    return 0;
}