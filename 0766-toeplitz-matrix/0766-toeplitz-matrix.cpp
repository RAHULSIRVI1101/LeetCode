class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     int t=i+1,j=1;
        //     while(t<m){
        //         if(matrix[t][j]!=matrix[t-1][j-1]) return false;
        //         t++;
        //         j++;
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     int t=1,j=i+1;
        //     while(j<n){
        //         if(matrix[t][j]!=matrix[t-1][j-1]) return false;
        //         t++;
        //         j++;
        //     }
        // }
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n-1;j++){
                if(matrix[i+1][j+1]!=matrix[i][j]) return false;
            }
        }
        return true;
    }
};