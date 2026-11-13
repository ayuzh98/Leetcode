class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int  i = 0 ; i < words.size() ; i++){
            string st = words[i];
            string rev = "";
            for(int j = st.length() - 1 ; j >= 0 ; j--) rev = rev + st[j];
            if(rev == st ) return st;
        }
         return "";
    }
};