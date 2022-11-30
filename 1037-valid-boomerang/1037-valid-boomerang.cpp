class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int s1=points[1][1]-points[0][1];
        int s2=points[1][0]-points[0][0];
        int p1=points[2][1]-points[1][1];
        int p2=points[2][0]-points[1][0];
        if((points[1][0]==points[2][0] && points[1][1]==points[2][1]) ||(points[1][0]==points[0][0] && points[1][1]==points[0][1]) ||(points[0][0]==points[2][0] && points[2][1]==points[0][1]) ) return false;
        if(p2*s1!=p1*s2) return true;
        return false;
    }
};