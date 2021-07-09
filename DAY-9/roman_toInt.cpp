#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    unordered_map<char, int> help;
    help['I'] = 1;
    help['V'] = 5;
    help['X'] = 10;
    help['L'] = 50;
    help['C'] = 100;
    help['D'] = 500;
    help['M'] = 1000;
    int ans = help[s[0]];
    for (int i = 1; i < n; i++)
    {
        if (help[s[i - 1]] < help[s[i]])
        {
            ans -= help[s[i - 1]];
            int temp = help[s[i]] - help[s[i - 1]];
            ans += temp;
        }
        else
            ans += help[s[i]];
    }
    cout << ans;
}