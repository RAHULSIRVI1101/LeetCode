class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        for(auto it: arr) {
            if(it==0) {
                temp.push_back(0);
                temp.push_back(0);
            }
            else{
                temp.push_back(it);
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=temp[i];
        }
    }
};