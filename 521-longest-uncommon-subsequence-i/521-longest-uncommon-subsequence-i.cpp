class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        return max(a.size(),b.size());
        // int n1=a.size();
        // int n2=b.size();
        // int dp[n1+1][n2+1];
        // for(int i=0;i<=n1;i++){
        //     dp[i][0]=0;
        // }
        // for(int i=0;i<=n2;i++)
        // {
        //     dp[0][i]=0;
        // }
        // for(int i=1;i<=n1;i++)
        // {
        //     for(int j=1;j<=n2;j++)
        //     {
        //         if(a[i-1] == b[j-1]) {
        //             dp[i][j] = dp[i-1][j-1]+1;
        //         }
        //         else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        //     }
        // }
        // int ans=max(n1-dp[n1][n2],n2-dp[n1][n2]);
        // return ans==0?-1:ans;
    }
};