class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> b(2 * n);
        
        // First half to even indexes
        for(int i = 0, j = 0; i < n; i++, j += 2){
            b[j] = nums[i];
        }

        // Second half to odd indexes
        for(int i = n, j = 1; i < 2 * n; i++, j += 2){
            b[j] = nums[i];
        }

        return b;
          // vector<int> arr(2 * n);
        // for (int i = 0; i < n; i++) {
        //     arr[2 * i] = nums[i];
        //     arr[2 * i + 1] = nums[n + i];
        // }

    }
};


      