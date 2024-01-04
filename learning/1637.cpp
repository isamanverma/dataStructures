#include <iostream>
#include <vector>

using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>> &points)
{
    int n = points.size();
    // sort the points based on the x coord
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (points[j][0] < points[minIndex][0])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     swap(points[i], points[minIndex]);
    // }
    sort(points.begin(), points.end());
    int max = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int difference = points[i][0] - points[i - 1][0];
        if (difference > max)
        {
            max = difference;
        }
    }
    return max;
}

int main(void)
{
    vector<vector<int>> points = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
    cout << maxWidthOfVerticalArea(points) << endl;
    return 0;
}