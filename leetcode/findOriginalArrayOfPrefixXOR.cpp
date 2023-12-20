#include <iostream>
#include <vector>
using namespace std;

// Answer: [5,7,2,3,2]

vector<int> originalArray(vector<int> &pref)
{
    vector<int> ans;
    int temp = 0;
    int temp2 = 0;
    for (int i = 0; i < pref.size(); i++)
    {
        int val = temp ^ temp2 ^ pref[i];
        temp2 = temp2 ^ temp;
        temp = val;
        ans.push_back(val);
    }
    return ans;
}

int main(void)
{
    vector<int> pref = {5, 2, 0, 3, 1};
    for (int i : originalArray(pref))
        cout << i << " ";
    // originalArray(pref);
    return 0;
}