class Solution
{
public:
    bool is_banned(vector<string> banned, string str)
    {
        for (int i = 0; i < banned.size(); i++)
        {
            if (str == banned[i])
                return false;
        }
        return true;
    }

public:
    string mostCommonWord(string para, vector<string> &banned)
    {
        transform(para.begin(), para.end(), para.begin(), ::tolower);
        string ans = "", temp = "";
        unordered_map<string, int> help;
        for (int i = 0; i < para.size(); i++)
        {
            if (int(para[i]) >= 97 && int(para[i]) <= 122)
            {
                temp += para[i];
            }
            else
            {
                if (temp == "")
                    continue;
                if (help.find(temp) == help.end())
                {
                    help[temp] = 1;
                }
                else
                {
                    help[temp] += 1;
                }
                temp = "";
            }
        }

        if (temp != "")
        {
            if (help.find(temp) == help.end())
            {
                help[temp] = 1;
            }
            else
            {
                help[temp] += 1;
            }
        }
        int ma = 0;
        if (help.size() == 0)
        {
            if (is_banned(banned, para))
            {
                return para;
            }
            return "";
        }
        for (auto i : help)
        {

            if (i.second > ma && is_banned(banned, i.first))
            {
                ma = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};