class Solution {
public:
    string a="qwertyuiopQWERTYUIOP";
    string b="asdfghjklASDFGHJKL";
    string c="zxcvbnmZXCVBNM";
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mpp;
        vector<string> res;
        for(auto x:a){
            mpp[x]=1;
        }
        for(auto x:b){
            mpp[x]=2;
        }
        for(auto x:c){
            mpp[x]=3;
        }
        for(auto x:words){
            bool ans=true;
            
            for(int i=1;i<x.size();i++){
                if(mpp[x[i]]!=mpp[x[i-1]]) {
                    ans=false;
                }
            }
            if(ans) res.push_back(x);
        }
        return res;
    }
};