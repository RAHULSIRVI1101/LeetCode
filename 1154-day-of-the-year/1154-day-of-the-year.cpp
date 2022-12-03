class Solution {
public:
    int dayOfYear(string date) {
        int ans;
        vector<int> month={31,28,31,30,31,30,31,31,30,31,30,31};
        int year=stoi(date.substr(0,4));
        int months=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        if(year%4==0) month[1]=29;
        for(int i=0;i<months-1;i++){
            ans+=month[i];
        }
        ans+=day;
        if(year==1900) ans--;
        return ans;
    }
};