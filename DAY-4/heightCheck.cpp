#include <bits/stdc++.h>

using namespace std;

int heightChecker(vector<int> heights)
{
    vector<int> required = heights;
    sort(required.begin(), required.end());
    int count = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] != required[i])
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n, 0);
    for (int i = 0; i < n; i++)
        cin >> heights[i];
    int count = heightChecker(heights);
    cout << count << endl;
    return 0;
}
