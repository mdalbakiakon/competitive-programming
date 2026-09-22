class Solution {
  public:
    bool sumOfRowCol(vector<vector<int>> &mat) {
        int cols = mat[0].size();
        int rows = mat.size();
        int count = min(cols, rows);
        int i = 0;

        while(i < count){
            int sum_row = 0;
            int sum_col = 0;

            for(int j = 0; j < mat[i].size(); j++){
                sum_row += mat[i][j];
            }

            for(int k = 0; k < rows; k++){
                sum_col += mat[k][i];
            }

            if(sum_row != sum_col){
                return 0;
            }

            i++;
        }

        return 1;
    }
};