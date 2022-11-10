class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double max_area=0;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                for(int k=j+1;k<points.size();k++){
                    max_area=max(max_area,area(points[i][0],points[i][1],points[j][0],points[j][1],points[k][0],points[k][1]));
                }
            }
        }
        return max_area;
    }
    double area(int x1,int y1,int x2,int y2,int x3,int y3){
        return 0.5*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
    } 
};