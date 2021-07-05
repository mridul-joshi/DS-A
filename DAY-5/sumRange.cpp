#include <bits/stdc++.h>

using namespace std;

int sumRange(vector<int> nums, int left, int right)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        nums[i] = sum;
    }
    if (left == 0)
        return nums[right];
    return nums[right] - nums[left - 1];
}

int main()
{
    int n, left, right;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> left >> right;
    int sum = sumRange(nums, left, right);
    cout << sum;
    return 0;
}