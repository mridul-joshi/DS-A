#include <bits/stdc++.h>

using namespace std;

string truncateString(string str, int k)
{
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
            count++;
        if (count == k)
            str.erase(str.begin() + i, str.end());
    }
    return str;
}

int main()
{
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    string res = truncateString(s, k);
    cout << res;
    return 0;
}