#include <iostream>
#include <utility>
using namespace std;
// Standard Template Library

int main(void)
{

    // Pair
    pair<int, int> p = {1, 2};
    cout << p.first << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 2}, {4, 5}};
    cout << arr[2].second << endl;

    // Vectors
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(83);
    cout << v[2];

    




    cout << endl;
    return 0;
}