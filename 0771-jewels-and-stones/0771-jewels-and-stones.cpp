class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
     int count = 0;
     for(char ch: jewels)
     for(int i = 0 ; i <stones.length() ; i++)if(ch == stones[i]) count++;
     return count;
    }
};