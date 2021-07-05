#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int> &indices)
{
    string result = s;
    for (int i = 0; i < indices.size(); i++)
    {
        result[indices[i]] = s[i];
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> indices(n, 0);
    for (int i = 0; i < n; i++)
        cin >> indices[i];
    string s;
    cin >> s;
    string res = restoreString(s, indices);
    cout << res;
    return 0;
}