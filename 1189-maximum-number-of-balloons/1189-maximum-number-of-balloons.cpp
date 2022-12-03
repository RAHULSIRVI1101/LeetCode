class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> mpp1;
        for(auto it: text) mpp[it]++;
        int ans=INT_MAX;
        string temp="balloon";
        for(auto it:temp) mpp1[it]++;
        
        for(auto it:mpp1){
            ans=min(ans,mpp[it.first]/it.second);
        }
        return ans;
 
    }
};