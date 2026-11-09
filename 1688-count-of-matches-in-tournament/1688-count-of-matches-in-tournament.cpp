class Solution {
public:
    int numberOfMatches(int n) {
      
      int summatches = 0;
      while(n>1){
        int matches;
        if(n%2 ==0) matches=n/2;
        else matches = (n-1)/2;
        summatches += matches;
      n = n - matches;
      }

        return summatches;
    }
};