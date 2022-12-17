class Solution {
public:
    int numberOfSteps(int num) {
        int cnt=0;
        while(num>0){
            if(num%2 && num>0){
                num-=1;
                cnt++;
            }
            if(num%2==0 && num>0){
                num/=2;
                cnt++;
            }
        }
       return cnt; 
    }
};