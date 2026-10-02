class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0 ;
         int maxiones = 0 ;
         for(int i = 0 ;  i <  nums.size() ; i ++){
            if(nums[i] == 1 ) {
                count++;
                maxiones = max(maxiones,count);
            }
            else count = 0;
         }
         return maxiones;
    }
};