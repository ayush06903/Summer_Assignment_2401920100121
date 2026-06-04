class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
            return mat;
        }

        vector<int> arr;

        // Store all elements in a 1D vector
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr.push_back(mat[i][j]);
            }
        }

        vector<vector<int>> ans(r, vector<int>(c));

        int k = 0;

        // Fill the reshaped matrix
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = arr[k++];
            }
        }

        return ans;
    }
};