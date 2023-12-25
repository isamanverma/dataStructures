#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int wordCount(string s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            ans++;
        }
    }
    return ans + 1;
}

int mostWordsFound(vector<string> &sentences)
{
    int n = sentences.size();
    vector<int> numWords;
    for (int i = 0; i < n; i++)
    {
        numWords.emplace_back(wordCount(sentences[i]));
    }
    return *max_element(numWords.begin(), numWords.end());
}

int main(void)
{
    vector<string> arr = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout << mostWordsFound(arr) << endl;
    return 0;
}