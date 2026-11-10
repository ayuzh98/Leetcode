class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans = "", ans2 ="";
        for(int i = 0 ; i<word1.size() ; i++)ans = ans + word1[i];
        for(int j = 0 ; j < word2.size() ; j++) ans2 = ans2 +word2[j];
        if(ans == ans2) return true;
        else return false;
    }
};