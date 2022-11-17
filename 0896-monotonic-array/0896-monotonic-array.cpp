class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    bool ans=true;
        bool isInc=true;
        bool isDec=true;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]<nums[i-1]) isInc=false;
            
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) isDec=false;
        }
        return isInc||isDec;
    }
};