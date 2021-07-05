#include <bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i += 2)
    {
        int freq = nums[i], val = nums[i + 1];
        while (freq--)
            result.push_back(val);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<int> result = decompressRLElist(nums);
    for (int i : nums)
        cout << i;
    return 0;
}