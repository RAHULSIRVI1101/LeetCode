class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int mn=0;
        int mx=s.size();
        for(char c:s){
            c=='I'?ans.push_back(mn++):ans.push_back(mx--);
        }
        ans.push_back(mn);
        return ans;
    }
};