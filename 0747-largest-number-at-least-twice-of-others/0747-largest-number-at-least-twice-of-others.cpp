class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first_max=INT_MIN,ans=-1;
        for(int i=0;i<nums.size();i++) if(nums[i]>first_max) {
            first_max=nums[i];
            ans=i;
        }
        for(int i=0;i<nums.size();i++) if(nums[i]*2> first_max  && nums[i]!=first_max) return -1;
        return ans;
    }
};