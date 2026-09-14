class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < i ; j++ ){ //int j = i ; j < n-1 or // int j = i + 1 ; j<n

            long temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;

            }
        }
        for(int i = 0 ; i < matrix. size() ; i++){
            for(int j = 0 , k = matrix.size() - 1 ;  j < k ; j++ , k--){
                 long temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
            }
        }
      return;
    }
};