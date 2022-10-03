class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;   
        }
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1){
                ans=max(ans,mpp[nums[i]]+mpp[nums[i-1]]);
            }
        }
        return ans;
    }
};