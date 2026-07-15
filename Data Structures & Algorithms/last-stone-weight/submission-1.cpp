class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i = 0; i < stones.size(); i++){
            q.push(stones[i]);
        }
        while(!q.empty()){
            int w1 , w2;
            if(q.size() == 1){
                return q.top();
            }
            if(q.size() == 0){
                return 0;
            }
            w1 = q.top();
            q.pop();
            w2 = q.top();
            q.pop();
            if(w1 == w2) continue;
            if(w1 > w2){
                int diff = w1 - w2;
                q.push(diff);
            }
            if(w1 < w2){
                int diff = w2 - w1;
                q.push(diff);
            }
        }

    }
};
