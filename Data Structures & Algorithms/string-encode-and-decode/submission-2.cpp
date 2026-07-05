class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i = 0; i < strs.size(); i++){
            s = s + strs[i];
            s = s + '`';
        }
        return s; 
    }

    vector<string> decode(string s) {
        vector<string> a;
        for(int i = 0; i < s.length(); i++){
            string t;
            while(s[i] != '`'){
                t = t + s[i];
                i++;
            }
            a.push_back(t);
        }
        return a;
    }
};
