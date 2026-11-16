class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i <nums.size() ; i++){
            int bitwise = INT_MAX;
            int mini = INT_MAX;
            for(int j = i ; j <nums.size() ; j++){
                bitwise = bitwise & nums[j];
                mini = min(mini , nums[j]);
                if(bitwise == mini ) count++;
            }
        }
        return count;
    }
};