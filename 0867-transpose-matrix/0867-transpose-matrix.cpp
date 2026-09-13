class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int r = matrix.size(); //number of rows
        int c = matrix[0].size(); //number of columns

        vector<vector<int>> brr(c, vector<int>(r));

        for(int i = 0; i < c; i++) {
            for(int j = 0; j < r; j++) {
                brr[i][j] = matrix[j][i];
            }
        }
        
        return brr;
        // int n = matrix.size();

//         for(int i = 0; i < n; i++) {
//             for(int j = i + 1; j < n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }

    }
};
