class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 1, 3, 4, 2, 2
        // s
        //             f

        int slow = nums[0]; 
        int fast = nums[0]; 
 
        // slow moves 1 step
        slow = nums[slow];

        // fast moves 2 steps
        fast = nums[nums[fast]];

        // For detecting the cycle
        // When slow == fast, a cycle is detected
        while(slow != fast) { 
            slow = nums[slow]; 
            fast = nums[nums[fast]]; 
        } 
 
        // Start slow again from the beginning
        slow = nums[0];

        // Move both one step at a time
        // The meeting point is the duplicate number
        while(slow != fast) { 
            slow = nums[slow];
            fast = nums[fast]; 
        } 
 
        return fast; // or return slow  
    }
};