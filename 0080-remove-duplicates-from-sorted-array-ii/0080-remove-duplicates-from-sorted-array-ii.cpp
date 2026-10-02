class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for (int x : nums) {
            if (k == 0 || k == 1 || x != nums[k - 2]) { 
                // k< 2  First 2 elements are always allowed.
            //After that, compare the current element with the element 2 positions behind.
                nums[k] = x;
                k++;
            }
        }

        return k;
    }
};