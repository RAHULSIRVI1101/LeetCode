class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int n1=num1.size()-1;
        int n2=num2.size()-1;
        int carry=0;
        while(n1>=0 || n2>=0 || carry)
        {
            int val=carry;
            if(n1>=0) val+=(num1[n1--]-'0');
            if(n2>=0) val+=(num2[n2--]-'0');
            carry=val/10;
            val=val%10;
            ans=to_string(val)+ans;
            
        }
        return ans;
        
    }
};