class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        //storing all the strings in map with same sorting order
        unordered_map<string, vector<string>> mpp;
        for (string it : strs)
        {
            string t = it;
            sort(t.begin(), t.end());
            mpp[t].push_back(it);
        }
        for (auto it : mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};