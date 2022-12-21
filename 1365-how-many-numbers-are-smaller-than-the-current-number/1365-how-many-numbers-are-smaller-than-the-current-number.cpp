class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        unordered_map<int, int> ump;
        for(int i=0; i<nums.size(); i++) {
            ump[i]=nums[i];
        }
        for(int i=0; i<nums.size(); i++) {
            int cnt=0, curr=nums[i];
            for(auto it:ump) {
                if(it.second < curr) cnt++;
            }
            res[i]=cnt;
        }
        return res;
    }
};