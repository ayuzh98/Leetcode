class Solution {
public:
    string truncateSentence(string s, int k) {
        
        stringstream input(s); 
        // allow to reads indiviadual words from the sentences 
        string words;
        string ans ="";
        for(int i = 0 ; i < k ; i++)
        {
            input>>words;//This reads one word at a time.
            if(i>0) ans = ans + " ";
            ans = ans  + words;
        }
        return ans;
    }
};