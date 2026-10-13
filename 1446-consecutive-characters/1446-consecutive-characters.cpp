class Solution {
public:
    int maxPower(string s) {
        int maxcount = 1 , count = 1 ;
            for(int i = 0 ; i < s.size() ; i++){
                if(s[i] == s[i+1]) count++;
                else count = 1;
               maxcount = max(maxcount,count);
            }
            return maxcount;
    }
};