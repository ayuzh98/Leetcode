class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
            vector<int> b(nums.size());

        int starting = 0;   //putting  position for even
        int ending = nums.size() - 1;    //putting position for odd

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                b[starting] = nums[i];
                starting= starting +2;
            }
            else {
                b[ending] = nums[i];
                ending=ending -2;
            }
        }

        return b;  
    }
};

