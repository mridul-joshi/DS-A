//all elemnt repating even times and 1 elemnt  repeating odd times;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    cout << res;
}

//brute force
for (int i = 0; i < n; i++)
{
    int count = 0;
    for (j = 0; j < n; j++)
    {
        if (arr[i] == arr[j])
            count++;
    }
    if (count % 2 != 0)
        return arr[i];
}