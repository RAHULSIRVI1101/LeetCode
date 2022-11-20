class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0;
        int j=0;
        int m=name.size();
        int n=typed.size();
        char x;
        while(i<m && j<n){
            if(name[i]==typed[j]){
                int c1=0,c2=0;
                x=name[i];
                while(name[i]==x && i<m) {
                    i++;
                    c1++;
                }
                while(typed[j]==x && j<n){
                    j++;
                    c2++;
                }
                if(c1>c2) return false;
            }
            else return false;
        }
        if(i==m) i--;
        if(j==n) j--;
        if(name[i]!=typed[j]) return false;
        return true;
    }
};