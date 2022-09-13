class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string> ans;
        unordered_map<int,string> mpp;
        unordered_map<int,int> mpp1;
        mpp[1]="Gold Medal";
        mpp[2]="Silver Medal";
        mpp[3]="Bronze Medal";
        for(int i=4;i<=n;i++){
        mpp[i]=to_string(i);
        }
        vector<int> temp=score;
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        for(int i=1;i<=n;i++){
            mpp1[temp[i-1]]=i;
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(mpp[mpp1[score[i]]]);
        }
     return ans;   
    }
};