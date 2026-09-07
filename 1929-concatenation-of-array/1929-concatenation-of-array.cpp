class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        long long n = nums.size();
        long long p = 2 * n;

        vector<int> arr1(p);

        // Copy nums for the first time
        for (int i = 0; i < n; i++) {
            arr1[i] = nums[i];
        }

        // Copy nums for the second time
        for (int i = n; i < p; i++) {
            arr1[i] = nums[i - n];
        }

        return arr1;
    }
};

