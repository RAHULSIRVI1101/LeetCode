class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int size=distance.size();
        int clock=0,anti=0;
        int i=start;
        while(i!=destination){
            clock+=distance[i];
            i=(i+1)%size;
        }
        while(i!=start){
            anti+=distance[i];
            i=(i+1)%size;
        }
        return min(anti,clock);
    }
};