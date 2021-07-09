#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st1, st2;
    cin >> st1 >> st2;
    int l1 = st1.size() - 1, l2 = st2.size() - 1;
    int carry = 0;
    string ans = "";
    while (l1 >= 0 && l2 >= 0)
    {
        if (st1[l1] == '0' && st2[l2] == '0' && carry == 0) //000
        {
            carry = 0;
            ans += '0';
        }
        else if (st1[l1] == '0' && st2[l2] == '0' && carry == 1) //001
        {
            carry = 0;
            ans += '1';
        }
        else if (st1[l1] == '0' && st2[l2] == '1' && carry == 0) //010
        {
            carry = 0;
            ans += '1';
        }
        else if (st1[l1] == '0' && st2[l2] == '1' && carry == 1) //011
        {
            carry = 1;
            ans += '0';
        }
        else if (st1[l1] == '1' && st2[l2] == '0' && carry == 0) //100
        {
            carry = 0;
            ans += '1';
        }
        else if (st1[l1] == '1' && st2[l2] == '0' && carry == 1) //101
        {
            carry = 1;
            ans += '0';
        }

        else if (st1[l1] == '1' && st2[l2] == '1' && carry == 0) //110
        {
            carry = 1;
            ans += '0';
        }
        else if (st1[l1] == '1' && st2[l2] == '1' && carry == 1) //111
        {
            carry = 1;
            ans += '1';
        }
        l1--;
        l2--;
    }

    while (l1 >= 0)
    {
        if (st1[l1] == '0' and carry == 0)
        {
            carry = 0;
            ans += '0';
        }
        else if (st1[l1] == '0' and carry == 1)
        {
            carry = 0;
            ans += '1';
        }
        else if (st1[l1] == '1' and carry == 1)
        {
            carry = 1;
            ans += '0';
        }
        else if (st1[l1] == '1' and carry == 0)
        {
            carry = 0;
            ans += '1';
        }

        l1--;
    }
    while (l2 >= 0)
    {
        if (st2[l2] == '0' and carry == 0)
        {
            carry = 0;
            ans += '0';
        }
        else if (st2[l2] == '0' and carry == 1)
        {
            carry = 0;
            ans += '1';
        }
        else if (st2[l2] == '1' and carry == 1)
        {
            carry = 1;
            ans += '0';
        }
        else if (st2[l2] == '1' and carry == 0)
        {
            carry = 0;
            ans += '1';
        }
        l2--;
    }
    if (carry == 1)
        ans += '1';
    reverse(ans.begin(), ans.end());
    cout << ans;
}