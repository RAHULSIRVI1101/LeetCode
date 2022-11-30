class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto x: arr) mp[x]++;
        unordered_set<int> dict;
        for(auto it : mp)
        {
            if(dict.count(it.second))
                    return false;
            else
                dict.insert(it.second);
        }
        return true;
    }
};