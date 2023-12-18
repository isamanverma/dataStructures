#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurence(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> answer;
    for (int i = 0; i < arr.size();)
    {
        int counter = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                counter++;
            else
                break;
        }
        answer.emplace_back(counter);
        i = i + counter;

        sort(answer.begin(), answer.end());
        for (int i = 0; i < answer.size(); i++)
        {
            if (answer[i] == answer[i + 1])
                return false;
        }
    }
    return true;
}

int main(void)
{
    // vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    // vector<int> arr = {1, 2};
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    if (uniqueOccurence(arr))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}