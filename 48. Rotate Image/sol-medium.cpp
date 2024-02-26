class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0; i<n/2; i++){
          for(int j=0; j<n-1-i;j++){
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[n-1-j][i];
            matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
            matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
            matrix[j][n-1-i] = tmp;
          }
        }
    }
};

// [0][0] -> [0][n-1] -> [m-1][n-1] -> [m-1][0] // [i][j] [j][n-1-i] [n-1-i][n-1-j] [n-1-j][i]
// [0][1] -> [1][n-1] -> [m-1][n-2] -> [m-2][0]

// [1,1] -> [1][n-2] -> [m-2][n-2] -> [m-2][1]
// [1,2] -> [2][n-2] -> [m-2][n-3] -> [m-3][1]
