class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int column = matrix[0].size();

        for (int j = 0; j < column; j++) {
            
            int maxi = 0;

            // Find maximum in column
            for (int i = 0; i < rows; i++) {
                maxi = max(maxi, matrix[i][j]);//keep the max value btw two
            }

            // Replace -1
            for (int i = 0; i < rows; i++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = maxi;
                }
            }
        }

        return matrix;
    }
};