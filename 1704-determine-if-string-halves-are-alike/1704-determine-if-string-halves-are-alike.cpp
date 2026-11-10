class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "",  b = "";
        for (int i = 0; i < s.length() / 2; i++)  a = a + s[i];
        for (int j = s.length() / 2; j < s.length(); j++) b = b + s[j];
        int count1 = 0, count2 = 0;
        string vowels = "aeiouAEIOU";
        for (int i = 0; i < a.length(); i++)
        if (vowels.find(a[i]) != string::npos) count1++;
        for (int i = 0; i < b.length(); i++)
         if (vowels.find(b[i]) != string::npos) count2++;
        return count1 == count2;
    }
};
// string::npos means not found.
//find() searches for the character a[i] inside the vowels string.