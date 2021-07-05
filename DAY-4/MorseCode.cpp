#include <bits/stdc++.h>

using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    vector<string> v = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> str;
    for (string word : words)
    {
        string s = "";
        for (char ch : word)
            s.append(words[ch - 'a']);
        str.insert(s);
    }
    return str.size();
}

int main()
{
    int n;
    cin >> n;
    vector<string> words(n, " ");
    for (int i = 0; i < n; i++)
        cin >> words[i];
    int count = uniqueMorseRepresentations(words);
    cout << count << endl;
    return 0;
}