#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> result;
    result.push_back(first);
    int curr = first;
    for (int num : encoded)
    {
        curr ^= num;
        result.push_back(curr);
    }
    return result;
}
void main()
{
    int n, key;
    cin >> n;
    vector<int> encoded(n, 0);
    for (int i = 0; i < n; i++)
        cin >> encoded[i];
    cin >> key;
    vector<int> result = decode(encoded, key);
    for (int num : result)
        cout << num;
}