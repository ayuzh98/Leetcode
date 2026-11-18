class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);//converting number into string
        if(s.find('6')!=string::npos) s[s.find('6')] = '9';
            return stoi(s); // converting string into integer
    }
};