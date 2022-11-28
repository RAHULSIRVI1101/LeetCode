class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int open=0,close=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            if(s[i]==')') close++;
            if(open==close){
                
                for(int j=start+1;j<i;j++) ans+=s[j];
                start=i+1;
                open=0;
                close=0;
            }
        }
        return ans;
    }
};