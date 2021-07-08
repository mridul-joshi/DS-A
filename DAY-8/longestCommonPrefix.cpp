#include <bits/stdc++.h>
using namespace std;
string check_lcp(string lcp, string a)
{
    int n = lcp.size();
    string n_lcp = "";
    for (int i = 0; i < n; i++)
    {
        if (lcp[i] == a[i])
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
    string lcp = arr[0];
    for (int i = 1; i < m; i++)
    {
        lcp = check_lcp(lcp, arr[i]);
    }
    cout << endl
         << lcp;
}