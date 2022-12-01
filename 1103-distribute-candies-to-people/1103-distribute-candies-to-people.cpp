class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int candy=1;
        while(true){
            for(int i=0;i<num_people;i++){
                if(candies>=candy){
                    ans[i]+=candy;
                    candies-=candy;
                }
                else{
                    ans[i]+=candies;
                    return ans;
                }
                candy++;
            }
        }
        return ans;
        
    }
};