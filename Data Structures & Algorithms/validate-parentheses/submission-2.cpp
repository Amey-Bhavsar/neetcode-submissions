class Solution {
public:
    bool isValid(string s){
        stack<char> brackets;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                brackets.push(s[i]);
            }
            else{
                if(brackets.empty()) return false;
                if(s[i] == ']' && brackets.top() == '['){
                    brackets.pop(); 
                    continue; 
                }
                if(s[i] == '}' && brackets.top() == '{'){
                    brackets.pop(); 
                    continue; 
                }
                if(s[i] == ')' && brackets.top() == '('){
                    brackets.pop(); 
                    continue; 
                }
                if(s[i] == ']' && brackets.top() != '['){
                    return false; 
                }
                if(s[i] == ')' && brackets.top() != '('){
                    return false;
                }
                if(s[i] == '}' && brackets.top() != '{'){
                    return false; 
                }
            }
        }
        if(brackets.empty()) return true;
        return false; 

    }
};
