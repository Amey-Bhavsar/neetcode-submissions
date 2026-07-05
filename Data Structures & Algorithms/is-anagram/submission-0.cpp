class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> mp ;
        unordered_map<char , int> mp0 ;
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++){
            if(mp.count(s[i]) == 0){
                mp.insert({s[i] , 1});
            }
            else{
                mp[s[i]] = mp[s[i]] + 1; 
            }
        }
        for(int j = 0; j < t.length(); j++){
            if(mp0.count(t[j]) == 0){
                mp0.insert({t[j] , 1});
            }
            else{
                mp0[t[j]] = mp0[t[j]] + 1; 
            }
        }
        if(mp == mp0) return true;
        else return false;

    }
};
