class Solution {
   public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre_sum(n + 1);
        pre_sum[0] = 0;
        for (int i = 1; i <= n; i++) pre_sum[i] = pre_sum[i - 1] + arr[i - 1];

        int sum(0);
        for (int i = 1; i <= n; i++)
            for (int j = i; j <= n; j += 2)
                sum += pre_sum[j] - pre_sum[i - 1];

        return sum;
    }
};