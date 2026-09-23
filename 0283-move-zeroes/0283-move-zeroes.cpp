class Solution {
public:
    void moveZeroes(vector<int>& nums) {
              // code here
vector<int> b(nums.size());
    int starting = 0;   //putting  position for even
    int ending = nums.size() - 1;    //putting position for odd

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            b[starting] = nums[i];
            starting ++;
        }
        else if (nums[i] = 0) {
            b[ending] = nums[i];
            ending --;
        }
    }

   for(int i = 0 ; i<nums.size();i++){
       nums[i]=b[i];
   }  
    }
};