#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> help;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            help.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (help.top() != '{')
            {
                flag = 1;
                break;
            }
            else
                help.pop();
        }
        else if (s[i] == ')')
        {
            if (help.top() != '(')
            {
                flag = 1;
                break;
            }
            else
                help.pop();
        }
        else if (s[i] == ']')
        {
            if (help.top() != '[')
            {
                flag = 1;
                break;
            }
            else
                help.pop();
        }
    }
    if (flag == 1 || help.size() > 0)
        cout << "False";
    else
        cout << "True";
}
