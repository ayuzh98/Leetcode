class Solution {
    public int countElements(int[] nums) {
        int mini = nums[0];
        int maxi = nums[0];
        //finding the max and min element 
         for(int x : nums){
            if(x < mini) mini = x;
            if(x > maxi) maxi = x;
         }
         //finding the btw element in maxi and mini
         int count = 0 ;
        for(int x : nums){
            if(x > mini && x < maxi) count++;
        }
        return count;
    }
}