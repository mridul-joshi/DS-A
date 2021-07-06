#include <bits/stdc++.h>
using namespace std;
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

    int maxele = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        int ele = *min_element(arr[i].begin(), arr[i].end());
        if (ele > maxele)
            maxele = ele;
    }
    cout << maxele;
}