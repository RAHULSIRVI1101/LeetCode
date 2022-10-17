class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                ans[i][j]=getResult(img,i,j,m,n);
            }
        }
        return ans;
    }
    int getResult(vector<vector<int>> &img,int i,int j,int m,int n){
        int t=0,sum=0;
        if(i-1>=0 && j-1>=0){
            sum+=img[i-1][j-1];
            t++;
        }
        if(i-1>=0 && j>=0){
            sum+=img[i-1][j];
            t++;
            
        }
        if(i-1>=0 && j+1<n){
            sum+=img[i-1][j+1];
            t++;
        }
        if(i>=0 && j-1>=0){
            sum+=img[i][j-1];
            t++;
        }
        if(i>=0 && j+1<n){
            sum+=img[i][j+1];
            t++;
        }
        if(i+1<m && j-1>=0){
            sum+=img[i+1][j-1];
            t++;
        }
        if(i+1<m){
            sum+=img[i+1][j];
            t++;
        }
        if(i+1<m && j+1<n){
            sum+=img[i+1][j+1];
            t++;
        }
        sum+=img[i][j];
        return sum/(t+1);
    }
};