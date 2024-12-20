class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> posOfVal;
        vector<int> pos;

        for (int i = 0; i < n; i++) {
            if (posOfVal.find(target - nums[i]) != posOfVal.end()) {
                pos.push_back(i);
                pos.push_back(posOfVal[target - nums[i]]);
                break;
            }
            posOfVal[nums[i]] = i;
        }
        return pos;
    }
};