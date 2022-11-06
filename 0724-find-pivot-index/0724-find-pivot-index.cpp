class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right=0,n=nums.size(),left=0;
        for(int i=0;i<n;i++){
            right+=nums[i];
        }
        for(int i=0;i<n;i++){
            right-=nums[i];
            if(right==left) return i;
            else left+=nums[i];
        }
        return -1;
    }
};
