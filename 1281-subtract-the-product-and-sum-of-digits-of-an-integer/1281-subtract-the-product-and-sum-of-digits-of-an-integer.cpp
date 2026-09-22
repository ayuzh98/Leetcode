class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int lastdigit = 0;
        int sum = 0;
        int original = n;
        for(int i = 0 ;  n >0 ; i++){
            lastdigit = n % 10;
            product = product*lastdigit;
            sum = sum + lastdigit;
            n = n /10;
        }
        return product-sum;
    }
};