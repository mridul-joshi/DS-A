#include <bits/stdc++.h>

using namespace std;

int subsetXORSum(vector<int> &nums, int index, int sum)
{
    if (index == nums.size())
        return sum;
    return subsetXORSum(nums, index + 1, sum ^ nums[index]) + subsetXORSum(nums, index + 1, sum);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int s = subsetXORSum(nums, 0, 0);
    cout << s << endl;
    return 0;
}