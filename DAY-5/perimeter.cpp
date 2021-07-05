#include <bits/stdc++.h>

using namespace std;

bool validDimension(vector<vector<int>> &grid, int i, int j, int r, int c)
{
    return i >= 0 && i < r && j >= 0 && j < c && grid[i][j] == 1;
}

int islandPerimeter(vector<vector<int>> &grid)
{
    int r = grid.size(), c = grid[0].size();
    int count = 0, sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 1)
            {
                sum = validDimension(grid, i - 1, j, r, c) + validDimension(grid, i + 1, j, r, c) + validDimension(grid, i, j + 1, r, c) + validDimension(grid, i, j - 1, r, c);
                count += 4 - sum;
            }
        }
    }
    return count;
}

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];
    }
    int perimeter = islandPerimeter(grid);
    cout << perimeter;
    return 0;
}