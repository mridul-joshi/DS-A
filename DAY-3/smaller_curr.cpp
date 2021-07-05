#include <bits/stdc++.h>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> result = nums;
    unordered_map<int, int> dict;
    sort(result.begin(), result.end());
    for (int i = result.size() - 1; i >= 0; i--)
        dict[result[i]] = i;
    for (int i = 0; i < nums.size(); i++)
        result[i] = dict[nums[i]];
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> result = smallerNumbersThanCurrent(nums);
    for (int num : result)
        cout << num;
    return 0;
}