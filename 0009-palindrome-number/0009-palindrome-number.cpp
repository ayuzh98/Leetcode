class Solution {
  public:
    bool isPalindrome(long long x) {
        // code here
 
    long long original = x;
    if(x<0 ){
        return 0;
    }

    else {
       int  digit;
        long long reverse = 0;
        while ( x !=0  ){
        digit = x % 10;
       reverse = reverse * 10 + digit;
        x = x/10;
        }
            if ( reverse != original)
            
               return 0;
               
                 }

        return 1;

    }
};