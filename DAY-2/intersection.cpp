#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m;
    set<int> s;
    for (int num : nums1)
        m[num] = 1;
    for (int num : nums2)
        if (m[num])
            s.insert(num);
    vector<int> result;
    for (int num : s)
        result.push_back(num);
    return result;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> nums1(m, 0), nums2(n, 0);
    for (int i = 0; i < m; i++)
        cin >> nums1[i];

    for (int i = 0; i < n; i++)
        cin >> nums2[i];

    vector<int> result = intersection(nums1, nums2);
    for (int num : result)
        cout << num;
    return 0;
}