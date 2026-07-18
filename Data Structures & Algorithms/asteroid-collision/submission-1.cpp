class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        //cannot think of any algo to solve using vector
        //sequence is important(think of stack and queue)
        //and we want to access the last element pushed implies stack
        stack<int>st;
        for(int i = 0; i < asteroids.size(); i++){
            if(st.empty()){
                st.push(asteroids[i]);
                continue;
            }
            if(st.top() > 0 && asteroids[i] > 0){
                st.push(asteroids[i]);
                continue; 
            }
            if(st.top() < 0 && asteroids[i] < 0){
                st.push(asteroids[i]);
                continue;
            }
            if(st.top() < 0 && asteroids[i] > 0){
                st.push(asteroids[i]);
                continue;
            }
            else{
                if(abs(st.top()) == abs(asteroids[i])){
                    st.pop();
                    continue;
                }
                if(abs(st.top()) > abs(asteroids[i])){
                    continue;
                }
                else{
                    st.pop();
                    i--;
                    //st.push(asteroids[i]);
                    continue;
                }
            }
        }
        vector<int> final(st.size());
        for(int i = final.size() - 1; i >= 0; i--){
            int tp = st.top();
            st.pop();
            final[i] = tp;
        }
        return final;


    }
};