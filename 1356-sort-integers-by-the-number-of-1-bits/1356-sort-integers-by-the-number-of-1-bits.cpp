class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> temp;
        map<int,vector<int>> mpp;
        
        for(auto it: arr){
          int val=check(it);
            mpp[val].push_back(it);
        }
       for(auto it:mpp){
           sort(it.second.begin(),it.second.end());
           for(int i=0;i<it.second.size();i++){
               temp.push_back(it.second[i]);
           }
       }
        return temp;
        
        
    }
    int check(int i){
        int cnt=0;
        while(i>0){
            if(i%2)cnt++;
            i=i/2;
        }
        return cnt;
    }
};