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
    int k = 0;
    cin >> k;
    map<int, int> help;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
                count++;
        }
        help[count] = i;
    }

    for (auto i : help)
    {

        if (k != 0)
        {
            cout << i.second << endl;
            k--;
        }
        else
            break;
    }
}