class Solution {
public:
   
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        multimap<int,vector<int>> mp;
        vector<vector<int>> ans;
        vector<int> temp;
        int dist=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                temp.push_back(i);
                temp.push_back(j);
                dist=abs(j-cCenter)+abs(i-rCenter);
                mp.insert({dist,temp});
                temp.clear();
            }
        }
        for(auto a: mp){
            ans.push_back(a.second);
        }
        return ans;
    }
    
};