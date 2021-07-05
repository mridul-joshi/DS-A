#include <bits/stdc++.h>

using namespace std;

int countConsistentStrings(string allowed, vector<string> words)
{
    unordered_map<char, int> m;
    for (char i : allowed)
        m[i]++;
    int count = 0;
    for (auto word : words)
    {
        int flag = 0;
        for (char ch : word)
        {
            if (m[ch])
                continue;
            flag = 1;
        }
        if (flag == 0)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<string> str(n, " ");
    for (int i = 0; i < n; i++)
        cin >> str[i];
    string allowed;
    cin >> allowed;
    int count = countConsistentStrings(allowed, str);
    cout << count;
    return 0;
}
