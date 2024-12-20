class Solution {
   public:
    vector<int> getRow(int rowIndex) {
        int numRows = 34;
        vector<vector<int>> pascalTriangle;

        pascalTriangle.push_back({1});

        for (int i = 1; i < numRows; ++i) {
            vector<int> row;
            row.push_back(1);

            for (int j = 1; j < i; ++j)
                row.push_back(pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j]);

            row.push_back(1);
            pascalTriangle.push_back(row);
        }

        return pascalTriangle[rowIndex];
    }
};