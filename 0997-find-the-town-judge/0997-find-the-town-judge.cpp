class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty() && n==1) return 1;
        vector<int> inDegree(n+1,0);
        vector<int> outDegree(n+1,0);
        for(auto it: trust){
            inDegree[it[1]]++;
            outDegree[it[0]]++;
            
            
        }
        for(int i=1;i<=n;i++){
            if(inDegree[i]==n-1 && outDegree[i]==0) return i;
        }
        
        return -1;
    }
};