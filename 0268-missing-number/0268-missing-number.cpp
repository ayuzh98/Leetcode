class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int expected = n *(n+1)/2 ;//expectedsum
        //n*(n+1)/2 is the sum of 1 to n numbers
        int actual=0;//actualsum
        for(int i = 0 ; i<n ; i++){

            actual = actual + nums[i];

        }

        return expected-actual;

    }
};
