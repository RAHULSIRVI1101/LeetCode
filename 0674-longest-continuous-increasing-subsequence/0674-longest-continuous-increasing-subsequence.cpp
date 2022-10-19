class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=0;
        int i=0;
        for(i;i<nums.size();i++)
        {
            int a=1;
            while(i<nums.size()-1 and nums[i+1]>nums[i])
            {
                a++;
                i++;
            }
            if(a>ans) ans=a;
        }
        return ans;
        
    }
};