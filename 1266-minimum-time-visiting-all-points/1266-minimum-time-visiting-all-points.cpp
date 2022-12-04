class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int cnt=0;
        vector<int> vect(2);
        vect[0]=points[0][0];
        vect[1]=points[0][1];
        
        for(int i=1;i<points.size();i++){
            cnt+=max(abs(points[i][0]-vect[0]),abs(points[i][1]-vect[1]));
            vect[0]=points[i][0];
            vect[1]=points[i][1];
        }
        return cnt;
    }
};