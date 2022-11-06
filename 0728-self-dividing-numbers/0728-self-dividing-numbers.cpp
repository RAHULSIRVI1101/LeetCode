class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int temp=i;
            bool res=true;
            while(temp>0){
                int rem=temp%10;
                if(rem==0) res=false;
                else if(i%rem!=0 && rem!=0) {
                    res=false;
                }
                temp=temp/10;
            }
            if(res) ans.push_back(i);
        }
        return ans;
    }
};