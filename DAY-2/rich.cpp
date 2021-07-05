#include <bits/stdc++.h>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{

    int max = 0;
    for (vector<int> customer : accounts)
    {
        int sum = 0;
        for (int amount : customer)
            sum += amount;
        max = std::max(max, sum);
    }
    return max;
}

int main()
{
    int m, n;
    cin >> n;
    cin >> m;

    vector<vector<int>> nums(n, vector<int>(m));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];

    cout << maximumWealth(nums);
    return 0;
}