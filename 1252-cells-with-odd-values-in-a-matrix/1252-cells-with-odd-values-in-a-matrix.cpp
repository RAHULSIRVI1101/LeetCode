class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> vect(m,vector<int> (n,0));
        int cnt=0;
        for(auto it:indices)
        {
            for(int i=0;i<n;i++){
                vect[it[0]][i]++;
            }
            for(int i=0;i<m;i++){
                vect[i][it[1]]++;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vect[i][j]%2) cnt++;
            }
        }
        return cnt;
        
    }
};