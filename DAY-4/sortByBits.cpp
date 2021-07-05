#include <bits/stdc++.h>

using namespace std;

int getSetBits(int num)
{
    int count = 0;
    while (num)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

vector<int> sortByBits(vector<int> &arr)
{
    vector<int> result;
    vector<pair<int, int>> bitCount;
    for (int i = 0; i < arr.size(); i++)
    {
        int count = getSetBits(arr[i]);
        bitCount.push_back({count, arr[i]});
    }
    sort(bitCount.begin(), bitCount.end());
    for (auto i : bitCount)
        result.push_back(i.second);
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<int> result = sortByBits(nums);
    for (auto i : result)
        cout << i << " ";
    return 0;
}
