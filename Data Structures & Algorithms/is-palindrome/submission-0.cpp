class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0 , right = s.length() - 1;
        while(left < right){
           if(!isalnum(s[right])){
            right--;
            continue; 
           }
           if(!isalnum(s[left])){
            left++;
            continue; 
           }
           if(isupper(s[left])){
            s[left] = tolower(s[left]);
           }
           if(isupper(s[right])){
            s[right] = tolower(s[right]);
           }
           if(s[left] == s[right]){
            left++; 
            right--;
           }
           else return false; 
        }
        return true; 
    }
};
