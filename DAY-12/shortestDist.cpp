class Solution
{
public:
    int minDist(int comp, vector<int> ind)
    {
        int min = INT_MAX;
        for (int i = 0; i < ind.size(); i++)
        {
            if (abs(ind[i] - comp) < min)
                min = abs(ind[i] - comp);
        }
        return min;
    }

public:
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> index;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
                index.push_back(i);
        }
        vector<int> ans;
        for (int i = 0; i < s.size(); i++)
        {
            int k = minDist(i, index);
            ans.push_back(k);
        }
        return ans;
    }
};