class Solution
{
public:
    bool isWord(string str)
    {
        unordered_map<char, int> help;
        help['a'] = 2;
        help['b'] = 3;
        help['c'] = 3;
        help['d'] = 2;
        help['e'] = 1;
        help['f'] = 2;
        help['g'] = 2;
        help['h'] = 2;
        help['i'] = 1;
        help['j'] = 2;
        help['k'] = 2;
        help['l'] = 2;
        help['m'] = 3;
        help['n'] = 3;
        help['o'] = 1;
        help['p'] = 1;
        help['q'] = 1;
        help['r'] = 1;
        help['s'] = 2;
        help['t'] = 1;
        help['u'] = 1;
        help['v'] = 3;
        help['w'] = 1;
        help['x'] = 3;
        help['y'] = 1;
        help['z'] = 3;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int comp = help[str[0]];
        for (int i = 1; i < str.size(); i++)
        {
            if (help[str[i]] != comp)
                return false;
        }
        return true;
    }

public:
    vector<string> findWords(vector<string> &words)
    {

        int n = words.size();
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            if (isWord(words[i]))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};