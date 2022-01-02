**Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.
Example 1:
Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output:
god dog
act cat tac
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.**

**O(n*s*log(s)) By using Inbuilt sort function**

```
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
```

**O(n\*s) By using Inbuilt sort function**

```
class Solution
{
private:
    string countingSort(string s)
    {
        int counter[26] = {0};
        for (char c : s)
        {
            counter[c - 'a']++;
        }
        string t;
        for (int c = 0; c < 26; c++)
        {
            t += string(counter[c], c + 'a');
        }
        return t;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mpp;
        for (auto it : strs)
        {
            mpp[countingSort(it)].push_back(it);
        }
        vector<vector<string>> anagrams;
        for (auto it : mpp)
        {
            anagrams.push_back(it.second);
        }
        return anagrams;
    }
};
```
