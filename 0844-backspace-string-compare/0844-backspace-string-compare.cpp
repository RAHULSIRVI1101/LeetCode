class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#') {
                if(ans1.size()) ans1.pop_back();
            
            }
            else ans1+=s[i];
        }
        string ans2="";
        
        for(int i=0;i<t.size();i++){
            
            if(t[i]=='#') {
                if(ans2.size()) ans2.pop_back();
            }
            else ans2+=t[i];
        }
        if(ans1==ans2) return true;
        return false;
        
    }
};