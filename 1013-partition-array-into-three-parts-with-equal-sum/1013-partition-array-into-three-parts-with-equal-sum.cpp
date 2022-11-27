class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i:arr) sum+=i;
        int temp=sum/3;
        if(sum%3) return false;
        int i=0;
        int newSum=0;
        for(i=0;i<arr.size();i++){
            newSum+=arr[i];
            if(newSum==temp) break;
        }
        if(i>=arr.size()-2) return false;
        newSum=0;
        int j=arr.size()-1;
        for(j=arr.size()-1;j>=0;j--) {
            newSum+=arr[j];
            if(newSum==temp) break;
        }
        if(j-i>1) return true;
        return false;
    }
};