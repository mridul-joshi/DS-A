#include <bits/stdc++.h>

using namespace std;

int floorOfAvg(vector<vector<int>> &img, int i, int j)
{
    int sum = img[i][j];
    int count = 1;
    if (j - 1 >= 0)
    {
        count++;
        sum += img[i][j - 1];
    }
    if (j + 1 < img[0].size())
    {
        count++;
        sum += img[i][j + 1];
    }
    if (i - 1 >= 0 && j - 1 >= 0)
    {
        count++;
        sum += img[i - 1][j - 1];
    }
    if (i - 1 >= 0)
    {
        count++;
        sum += img[i - 1][j];
    }
    if (i - 1 >= 0 && j + 1 < img[0].size())
    {
        count++;
        sum += img[i - 1][j + 1];
    }
    if (i + 1 < img.size() && j - 1 >= 0)
    {
        count++;
        sum += img[i + 1][j - 1];
    }
    if (i + 1 < img.size())
    {
        count++;
        sum += img[i + 1][j];
    }
    if (i + 1 < img.size() && j + 1 < img[0].size())
    {
        count++;
        sum += img[i + 1][j + 1];
    }
    return floor(sum / count);
}

vector<vector<int>> imageSmoother(vector<vector<int>> &img)
{
    if (img.size() == 1 && img[0].size() == 1)
        return img;
    int m = img.size(), n = img[0].size();
    vector<vector<int>> result(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            result[i][j] = floorOfAvg(img, i, j);
    }
    return result;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    vector<vector<int>> result = imageSmoother(grid);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}