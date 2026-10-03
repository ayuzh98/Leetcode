class Solution {
public:
    int majorityElement(vector<int>& nums) {
		//MOORE'S ALGORITHIM
        // count stores the current "vote" for the candidate
        int count = 0;

        // element stores the current possible majority element
        int element;

        // First pass: Find the possible majority element
        for (int i = 0; i < nums.size(); i++) {

            // If count becomes 0,
            // choose the current element as a new candidate
            if (count == 0) {
                count = 1;
                element = nums[i];
            }

            // If current element is same as candidate,
            // increase its vote
            else if (nums[i] == element) {
                count = count + 1;
            }

            // If current element is different,
            // cancel one vote of the candidate
            else {
                count--;
            }
        }

        // Second pass:
        // Count how many times the candidate actually appears
        int count1 = 0;

        for (int i = 0; i < nums.size(); i++) {

            // If current element matches our candidate,
            // increase its actual frequency
            if (nums[i] == element)
                count1++;
        }

        // Check whether the candidate appears
        // more than n/2 times
        if (count1 > nums.size() / 2) {
            return element;
        }

        // If no majority element exists
        return -1;
    }
};