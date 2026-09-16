class Solution {
public:
    void sortColors(vector<int>& nums) {
        long n = nums.size();
        for(int i = 0 ; i <= n - 1 ; i++){
            bool swap = false;
            for(int j = 0 ; j< n - 1-i ; j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                   nums[j+1] =temp;
                    swap = true;
                }
            }
            if(swap == false) break;
            }
              
           
    }
};