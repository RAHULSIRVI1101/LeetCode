class Solution {
public:
    bool detectCapitalUse(string word) {
        unordered_map<char,int>mpp;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]<91){
                mpp[word[i]]=2;
            }
            else{
                mpp[word[i]]=1;
            }
        }
        bool fault = true;
        for(int i=1;i<word.size();i++)
        {
            if(mpp[word[i-1]]!=mpp[word[i]]) fault=false;
        }
        if(fault==true) return true;
        
        if(mpp[word[0]]==2 && mpp[word[1]]==1){
            for(int i=2;i<word.size();i++)
            {
                if(mpp[word[i]]==2) return false;
            }
            return true;
        }
        return false;
    }
};