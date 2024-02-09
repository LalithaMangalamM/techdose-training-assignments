class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zero;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (matrix[i][j] == 0)
                    zero.push_back({i, j});
            }
        }

        for (auto p : zero)
        {
            int row = p.first;
            int col = p.second;

            matrix[row].assign(m, 0);

            for (int i=0; i<n; i++)
                matrix[i][col] = 0;
        }

    }
};