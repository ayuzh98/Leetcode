class Solution { 
public: 
    int findNumbers(vector<int>& nums) { 

        int count = 0; 
 
        for (int i = 0; i < nums.size(); i++) { 
            int count1 = 0; 
            int n = nums[i]; 
 
            for(int j = 0; n>0;j++) { 
                n = n / 10; 
                count1++; 
            } 
 
            if (count1 % 2 == 0) { 
                count++; 
            } 
        } 
 
        return count; 
    } 
};