#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n & (-n);
    if (a == n)
        cout << "true";
    else
        cout << "False";
}

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
            return false;
        while (n % 2 == 0)
        {
            n = n / 2;
        }
        return n == 1;
    }
};