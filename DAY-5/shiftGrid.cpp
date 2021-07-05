#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
{
    vector<vector<int>> result = grid;
    while (k--)
    {
        int m = grid.size(), n = grid[0].size();
        k = k % (m * n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j + 1 < n)
                    result[i][j + 1] = grid[i][j];
                if (i + 1 < m)
                    result[i + 1][0] = grid[i][n - 1];
            }
        }
        result[0][0] = grid[m - 1][n - 1];
        grid = result;
    }
    return result;
}

int main()
{
    int m, n, k;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    cin >> k;
    vector<vector<int>> result = shiftGrid(grid, k);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}