class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        //m is rows and n is column
     vector<vector<int>> result(m, vector<int>(n));    
       long a = m*n;
       
        if (original.size() != a) {
            return {};
        }


    for(int i = 0 ; i<a ; i++){
        result[i/n][i%n] = original[i];
    }

    return result;


    }
};