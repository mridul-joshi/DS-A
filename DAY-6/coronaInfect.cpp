#include <bits/stdc++.h>
using namespace std;
void check_for_corona(vector<vector<int>> &arr, int i, int j)
{
    if (arr[i][j] == 1)
    {
        arr[i][j] = 2;
        if (arr[i - 1][j] == 1)
        {
            arr[i - 1][j] = 2;
            check_for_corona(arr, i - 1, j);
        }
        if (arr[i + 1][j] == 1)
        {
            arr[i + 1][j] = 2;
            check_for_corona(arr, i + 1, j);
        }
        if (arr[i][j - 1] == 1)
        {
            arr[i][j - 1] = 2;
            check_for_corona(arr, i, j - 1);
        }
        if (arr[i][j + 1] == 1)
        {
            arr[i][j + 1] = 2;
            check_for_corona(arr, i, j + 1);
        }
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }
    int pos_i, pos_j;
    cin >> pos_i >> pos_j;
    check_for_corona(arr, pos_i, pos_j);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
