#include <iostream>
#include <string>

using namespace std;

int splitter(string s)
{
    int n = s.size();
    vector<int> temp;

    int zeroCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int oneCount = 0;
        if (s[i] == '0')
        {
            zeroCount++;
        }
        for (int j = n - 1; j > i; j--)
        {
            if (s[j] == '1')
            {
                oneCount++;
            }
        }
        temp.emplace_back((zeroCount + oneCount));
    }

    int max = INT_MIN;
    for (int i : temp)
    {
        if (i > max)
        {
            max = i;
        }
    }
    return max;
}

int main(void)
{
    string s = "00";
    // string s = "00111";
    cout << splitter(s) << endl;

    return 0;
}