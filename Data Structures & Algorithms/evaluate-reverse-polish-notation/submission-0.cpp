class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int val = 0; 
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                st.push(stoi(tokens[i])); 
            }
            else{
                int val1 = st.top();
                st.pop();
                int val2 = st.top(); 
                st.pop();
                if(tokens[i] == "+"){
                    val = val1 + val2;
                    st.push(val);
                }
                if(tokens[i] == "-"){
                    val = val2 - val1;
                    st.push(val);
                }
                if(tokens[i] == "*"){
                    val = val1 * val2; 
                    st.push(val); 
                }
                if(tokens[i] == "/"){
                    val = val2 / val1 ; 
                    st.push(val);
                }
            }
        }
        return st.top();
    }
};
