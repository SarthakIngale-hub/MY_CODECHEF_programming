class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();

        vector<vector<int>> result(C, vector<int>(R));

        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                result[j][i] = matrix[i][j];
            }
        }
        
        return result;
    }
};
