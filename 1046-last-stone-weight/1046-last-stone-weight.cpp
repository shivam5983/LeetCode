class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone : stones) pq.push(stone);
        while(pq.size()>=2){
            int y,x;
            y=pq.top();
            pq.pop();
            x=pq.top();
            pq.pop();
            if(y!=x) pq.push(y-x);
        }
        if(pq.size()==1) return pq.top();
        else return 0;
    }
};