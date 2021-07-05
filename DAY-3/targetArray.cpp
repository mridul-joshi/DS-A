#include <bits/stdc++.h>

using namespace std;

vector<int> createTargetArray(vector<int> nums, vector<int> values)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
        result.insert(result.begin() + nums[i], values[i]);
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> values(n, 0), nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < n; i++)
        cin >> values[i];
    vector<int> result = createTargetArray(nums, values);
    for (int i : result)
        cout << i << " ";
    return 0;
}