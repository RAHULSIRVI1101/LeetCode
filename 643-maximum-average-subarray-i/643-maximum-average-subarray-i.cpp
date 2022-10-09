class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double res=sum/k;
        for(int i=1;i<nums.size()-k+1;i++){
            sum=sum-nums[i-1]+nums[i+k-1];
            if(sum/k > res) res=sum/k;
        }
        return res;
    }
};