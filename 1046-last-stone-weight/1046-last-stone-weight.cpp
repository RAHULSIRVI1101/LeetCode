class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int a,b;
        for(auto it:stones) pq.push(it);
        while(!pq.empty() && pq.size()>=2){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            if(a!=b) pq.push(a-b);
        }
        if(!pq.empty()) return pq.top();
        return 0;
    }
};