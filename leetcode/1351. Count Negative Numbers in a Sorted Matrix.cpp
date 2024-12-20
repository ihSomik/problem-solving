class Solution{
public:
    int countNegatives(vector<vector<int>> &grid){
        int ans(0);
        for (auto row : grid){
            reverse(row.begin(), row.end());
            ans += lower_bound(row.begin(), row.end(), 0) - row.begin();
        }
        return ans;
    }
};