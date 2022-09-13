class Solution {
public:
    string convertToBase7(int nums) {
        int num=abs(nums);
        string ans="";
        if(num==0)
           {
               ans+=to_string(num);
            return ans;
           }
        while(num>0){
            int rem=num%7;
            ans+=to_string(rem);
            num=num/7;
        }
        if(nums<0){
            ans+="-";
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};