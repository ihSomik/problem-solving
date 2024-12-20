class Solution{
public:
    int binarySearch(const vector<int> &arr, int target){
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right){
            int mid = left + (right - left) / 2; 

            if (arr[mid] == target)
                return mid;

            if (arr[mid] > target)
                right = mid - 1;

            else
                left = mid + 1;
        }

        return -1;
    }

    int searchInsert(vector<int> &nums, int target){
        int index = binarySearch(nums, target);
        if (index == -1)
            index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        return index;
    }
};