class Solution {
public:
    int maxDepth(string s) {
        int  count = 0 , maxi = 0;
        for(char ch : s)
        {
            if(ch == '(') {
                count ++;
                maxi = max(count,maxi);
            }
            else if (ch ==')') count--;
        }
        return maxi;
    }
};