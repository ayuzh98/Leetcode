class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         
         long long sum = 0; 
         long long n = nums.size();
          vector<int> b(n);
        
    for(int i = 0 , j = 0 ; i<n , j<n ; i++, j++){   
          sum = sum + nums[i];
        b[j] = sum;
    }
    return b;
    }
};