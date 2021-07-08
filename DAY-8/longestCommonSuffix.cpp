#include <bits/stdc++.h>
using namespace std;
string check_lcp(string lcSuffix, string a)
{
    int n = lcSuffix.size();
    string n_lcp = "";
    for (int i = 0; i < n; i++)
    {
        if (lcSuffix[i] == a[i])
        {
            n_lcp += a[i];
        }
        else
            break;
    }
    return n_lcp;
}
int main()
{
    int m, n;
    cin >> m;
    vector<string> arr;
    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    string lcSuffix = arr[0], temp = "";
    for (int i = 1; i < m; i++)
    {
        lcSuffix = check_lcp(lcSuffix, arr[i]);
    }
    reverse(lcSuffix.begin(), lcSuffix.end());
    cout << lcSuffix;
}