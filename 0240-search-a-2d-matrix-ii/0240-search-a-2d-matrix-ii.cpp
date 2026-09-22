class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        bool flag = false;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size(); j++){
                if(matrix[i][j] == target){
                    flag = true;
                    break;
                }
            }
        }
        if(flag == true ) return true;
        else if (flag == false) return false;
        return{};
    }
};