class Solution {
public:
    vector<int> twoSum(vector<int>& nums, long long target) {

        for (int k = 0; k < nums.size(); k++) {

           long  long l = nums[k];

            for (int i = k + 1 ; i < nums.size(); i++){
                long long z = nums[i];
                    long long  p = l + z;
            if( p == target) 
                return {k , i};

            }
        }
        return {};
    }
};