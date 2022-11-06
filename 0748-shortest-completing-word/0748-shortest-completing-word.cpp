class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int mpp[26]={};
        for(int i=0;i<licensePlate.size();i++){
            if(licensePlate[i]>=65 && licensePlate[i]<=90){
                mpp[licensePlate[i]-65]++;
            }
            else if(licensePlate[i]>=97 && licensePlate[i]<=122)
            {
                mpp[licensePlate[i]-97]++;
            }
        }
        int shortest=INT_MAX;
        int length=-1;
        for(int i=0;i<words.size();i++){
            int match=1;
            string s=words[i];
            int mpp2[26]={};
            for(int i=0;i<s.size();i++) mpp2[s[i]-97]++;
            for(int i=0;i<26;i++) {
                if(mpp[i]>mpp2[i]) match=0;
            }
            if(match && shortest>s.size() ){
             length=i;   
             shortest=s.size();
        }
        }
        return words[length];
    }
};