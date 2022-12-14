class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for(int i=0;i<arr.size();i++){
            if(s.find(arr[i]*2)!=s.end() || (s.find(arr[i]/2)!=s.end() && arr[i]%2==0)) return true;
            s.insert(arr[i]);
        }
        return false;
    }
};