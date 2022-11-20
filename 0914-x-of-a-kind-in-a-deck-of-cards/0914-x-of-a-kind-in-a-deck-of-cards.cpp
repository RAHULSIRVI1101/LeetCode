class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mpp;
        for(int i=0;i<deck.size();i++){
            mpp[deck[i]]++;
        }
        int mini=INT_MAX;
        for(auto it:mpp){
            mini=min(mini,it.second);
        }
        int gcdi=mini;
        for(auto it:mpp){
            gcdi=__gcd(gcdi,it.second);
        }
        if(gcdi<=1) return false;
        return true;
    }
};