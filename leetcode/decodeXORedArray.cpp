#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> ans;
    int n = encoded.size();
    ans.emplace_back(first);
    for (int i = 0; i < n; i++)
    {
        ans.emplace_back(encoded[i] ^ ans[i]);
    }
    return ans;
}

int main(void)
{
    vector<int> arr = {6, 2, 7, 3};
    for (int i : decode(arr, 4))
        cout << i << " ";
    return 0;
}