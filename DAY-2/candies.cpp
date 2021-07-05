#include <bits/stdc++.h>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int currMax = *max_element(candies.begin(), candies.end());
    vector<bool> result;
    for (int num : candies)
    {
        if (num + extraCandies >= currMax)
            result.push_back(true);
        else
            result.push_back(false);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int extraCandy;
    cin >> extraCandy;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<bool> result = kidsWithCandies(nums, extraCandy);
    for (int num : result)
        cout << num;
    return 0;
}