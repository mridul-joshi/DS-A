#include <bits/stdc++.h>

using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
            return i - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int peak = peakIndexInMountainArray(arr);
    cout << peak << endl;
    return 0;
}