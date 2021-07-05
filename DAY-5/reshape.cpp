#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int m = mat.size(), n = mat[0].size();
    if (r * c != m * n)
        return mat;
    vector<vector<int>> result(r, vector<int>(c, 0));
    int row = 0, col = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[row][col] = mat[i][j];
            col += 1;
            if (col == c)
            {
                col = 0;
                row = row + 1;
            }
        }
    }
    return result;
}

int main()
{
    int m, n, r, c;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    cin >> r >> c;
    vector<vector<int>> result = matrixReshape(grid, r, c);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}