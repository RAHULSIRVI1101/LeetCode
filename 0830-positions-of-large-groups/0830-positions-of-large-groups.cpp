class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        vector<int> temp(2);
        for(int i=0;i<s.size()-1;i++){
            int t=1;
            int ini=i;
            
            while(s[i+1]==s[i]){
                
                t++;
                i++;
            }
            if(t>=3){
                temp[0]=ini;
                temp[1]=ini+t-1;
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};