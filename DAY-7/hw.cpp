class Solution
{
public:
    int binary(vector<int> arr)
    {
        int high = arr.size(), n = arr.size();
        int low = 0, ans = -1;
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] < 0)
            {
                ans = mid;
                high = mid;
            }
            if (arr[mid] >= 0)
                low = mid + 1;
        }

        if (ans == -1)
            return 0;
        return n - ans;
    }

public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            sum += binary(grid[i]);
        }
        return sum;
    }
};