class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(long long int i=1;i<num;i++)
        {
            if(num%i==0){
                sum+=i;
            }
        }
        return sum==num?true:false;
    }
};