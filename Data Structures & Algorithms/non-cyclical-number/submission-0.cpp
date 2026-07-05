class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        int start;
        while(true){
            int sumOfsquares = 0;
            start = n; 
            while(n != 0){
                int digit  = n % 10; 
                sumOfsquares = sumOfsquares + (digit * digit);
                n = n /10; 
            }
            if(sumOfsquares == 1){
                return true;
            }
            else{
                if(s.count(start) == 1){
                    return  false;
                }
                s.insert(start);
            }
            n = sumOfsquares; 
        }
    }
};
