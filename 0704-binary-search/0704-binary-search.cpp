class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
          
            int mid = left + (right - left) / 2;   // Find the middle index 
           
            if (nums[mid] == target) { // Check if the target is present at mid
                return mid; 
            }
            
            // If target is greater, ignore the left half
            if (nums[mid] < target) {
                left = mid + 1; 
            }
            // If target is smaller, ignore the right half
            else {
                right = mid - 1; 
            }
        }
        
        // Target was not found
        return -1; 
    }
};