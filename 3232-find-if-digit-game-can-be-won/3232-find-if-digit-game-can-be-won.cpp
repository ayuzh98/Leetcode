class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
         int singleDigitSum = 0;
        int doubleDigitSum = 0; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0 && nums[i] <= 9) {
                singleDigitSum += nums[i];
            } 
            else if (nums[i] >= 10 && nums[i] <= 99) {
                doubleDigitSum += nums[i]; 
            }
        }

        if (singleDigitSum == doubleDigitSum)  return false;
         else   return true;
    }
};