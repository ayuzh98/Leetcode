class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        // int range;
        //  if(a>b) range = b;
        //   else if (b >a ) range = a;
        int range = min(a,b);
        for(int i = 1; i<=range ; i++){
                if(a % i == 0 && b % i == 0) count++;
        }
        return count;
    }
};