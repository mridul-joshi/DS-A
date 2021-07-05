#include <bits/stdc++.h>

using namespace std;

int goodpairs(vector<int> &nums)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int num : nums)
    {
        if (m[num])
        {
            count += m[num]++;
            continue;
        }
        m[num] = 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << goodpairs(nums);
    return 0;
}