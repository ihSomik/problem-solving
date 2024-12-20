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

    int search(vector<int> &nums, int target){
        return binarySearch(nums, target);
    }
};