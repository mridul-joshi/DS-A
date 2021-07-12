#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.size() - 1, s1 = -1, s2 = -1;
    while (i < j)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s1 = i;
        }
        else
        {
            i++;
        }
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
        {
            s2 = j;
        }
        else
        {
            j--;
        }
        if (s1 != -1 && s2 != -1)
        {
            char a = s[s1];
            s[s1] = s[s2];
            s[s2] = a;
            i++;
            j--;
            s1 = -1;
            s2 = -1;
        }
    }
    cout << s;
}