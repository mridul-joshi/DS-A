#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            swap(arr[j][i], arr[i][j]);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        reverse(arr[i].begin(), arr[i].end());
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

    vector<vector<int>> comp;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            temp.push_back(t);
        }
        comp.push_back(temp);
    }

    if (arr == comp)
    {
        cout << "True";
        return 0;
    }

    int k = 3;
    while (k--)
    {
        rotate(arr);
        if (arr == comp)
        {
            cout << "True";
            return 0;
        }
    }
    cout << "False";
}
