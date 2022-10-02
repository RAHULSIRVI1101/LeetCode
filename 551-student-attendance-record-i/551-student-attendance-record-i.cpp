class Solution {
public:
    bool checkRecord(string s) {
        int a=0,Maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') a++;
            if(s[i]=='L'){
                int temp=0;
                while(s[i]=='L'&& i<s.size()){
                    temp++;
                    i++;
                }
                i--;
                Maxi=max(Maxi,temp);
            }
        }
        if(a<2 && Maxi<3) return true;
        return false;
    }
};