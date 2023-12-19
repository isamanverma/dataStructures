#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllDuplicates_Method1(vector<int> &arr)
{
    vector<int> duplicate;
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate.emplace_back(arr[i]);
            }
        }
    }
    return duplicate;
}

vector<int> findAllDuplicates_Method2(vector<int> &arr)
{
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        int num = abs(arr[i]);
        if (arr[num - 1] < 1)
        {
            answer.emplace_back(num);
        }
        arr[num - 1] = arr[num - 1] * (-1);
    }
    return answer;
}

int main(void)
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    for (int i : findAllDuplicates_Method2(arr))
        cout << i << " ";
    cout << endl;

    return 0;
}