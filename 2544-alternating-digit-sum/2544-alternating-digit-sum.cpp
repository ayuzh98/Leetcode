class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n); // converting the number to string
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0'; // converts a character digit into an integer.
            if (i % 2 == 0) sum += digit;
            else sum -= digit;
        }
        return sum;
    }
};