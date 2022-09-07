class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> ans;
        vector<int> res;
        unordered_map<int,int> mpp;
        for(auto x:nums2){
            while(ans.size() && ans.top()<x){
                mpp[ans.top()]=x;
                ans.pop();
            }
        ans.push(x);
        }
        for(auto x: nums1){
            if(mpp.count(x))
                res.push_back(mpp[x]);
            else
                res.push_back(-1);
        }
        return res;
        
    }
};