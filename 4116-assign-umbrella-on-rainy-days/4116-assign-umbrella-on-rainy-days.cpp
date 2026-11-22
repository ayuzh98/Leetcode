class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int alice = 0, bob = 0;
        for (int i = 0; i < rain.size(); i++) {
            if (rain[i] == 1 && i + 1 < rain.size() && rain[i + 1] == 1) {
                if (alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                } else {
                    ans.push_back("Bob");
                    bob++;
                }
            } else if(rain[i] == 1) {
               ans.push_back("Bob");
                bob++;
            } else
                ans.push_back("None");
        }
        return ans;
    }
};