class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int freq=0;
        for(auto it: mp){
            if(it.second.size()>freq) freq=it.second.size();
        }
        int res=INT_MAX;
        for(auto it:mp){
            if(it.second.size()==freq){
                vector<int> temp=it.second;
                res=min(res,temp[temp.size()-1]-temp[0]+1);
            }
        }
        return res;
    }
};