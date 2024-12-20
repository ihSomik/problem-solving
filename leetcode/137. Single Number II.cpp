class Solution
{
public:
    int singleNumber(vector<int> &v)
    {
        map<int, int> mp;
        for (auto it : v)
            mp[it]++;
        int ans;
        for (auto it : mp)
            if (it.second == 1)
                ans = it.first;

        return ans;
    }
};