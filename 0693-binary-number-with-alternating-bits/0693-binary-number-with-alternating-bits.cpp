class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==1) return true;
        int prev=n%2;
        n=n/2;
        int curr=n%2;
        n=n/2;
        if(prev==curr) return false;
        while(n>0){
            int ss=n%2;
            if(ss==curr) return false;
            prev=curr;
            curr=ss;
            n=n/2;
        }
        return true; 
    }
};