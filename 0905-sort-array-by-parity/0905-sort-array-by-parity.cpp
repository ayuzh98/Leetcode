class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> b(nums.size());

        int starting = 0;   //putting  position for even
        int ending = nums.size() - 1;    //putting position for odd

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                b[starting] = nums[i];
                starting++;
            }
            else {
                b[ending] = nums[i];
                ending--;
            }
        }

        return b;
    }
};