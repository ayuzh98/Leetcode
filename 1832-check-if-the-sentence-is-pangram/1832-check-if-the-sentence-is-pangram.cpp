class Solution {
public:
    bool checkIfPangram(string sentence) {
          int arr[26] = {false};
          for(char ch : sentence) arr[ch - 'a'] = true;
          for(int i = 0 ; i<26 ; i++) 
          {
            if(arr[i] == false) return false;
          }
          return true;
    }
};