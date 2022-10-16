class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0,j=0,t=0;
        int n=moves.size();
        while(t<n){
            if(moves[t]=='R') i++;
            else if(moves[t]=='L') i--;
            else if(moves[t]=='U') j--;
            else j++;
            
            t++;
        }
        if(i==0 && j==0) return true;
        return false;
    }
};