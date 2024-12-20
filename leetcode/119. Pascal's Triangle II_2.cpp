class Solution {
   public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1);
        row[0] = row[rowIndex] = 1;

        for (int i = 1; i < rowIndex; i++)
            row[i] = (long long)row[i - 1] * (rowIndex - i + 1) / i;  // row of the Pascal's triangle, nC0 nC1 nC2 ...

        return row;
    }
};