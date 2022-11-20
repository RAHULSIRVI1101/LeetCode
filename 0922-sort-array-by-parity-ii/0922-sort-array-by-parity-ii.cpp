class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,j=nums.size();
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) res.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2) res.push_back(nums[i]);
        }
        int t=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=res[t];
            t++;
        }
        for(int i=1;i<nums.size();i+=2){
            nums[i]=res[t];
            t++;
        }
        return nums;
    }
};