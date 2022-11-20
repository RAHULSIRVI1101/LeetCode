class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(j>i){
            if(nums[i]%2 && nums[j]%2){
                j--;
            }
            else if(nums[i]%2){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else if(nums[i]%2==0 && nums[j]%2==0){
                i++;
                
            }
            else{
                i++;
                j--;
            }
        }
        return nums;
    }
};