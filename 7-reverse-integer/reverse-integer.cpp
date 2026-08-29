class Solution {
public:
   long long reverse(long long x) {
        
        
long long product = 0;
 long long digit;
for (int i = 0; x != 0; i++){
 digit = x % 10;
    product  = product * 10 + digit;
    x = x/10;
}
if (product > 2147483647 || product < -2147483648LL)
    return 0;

return product;}
};