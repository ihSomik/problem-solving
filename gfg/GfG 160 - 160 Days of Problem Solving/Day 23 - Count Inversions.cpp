class Solution {
 public:
  int merge(vector<int> &arr, int l, int mid, int r) {
    int inversion(0);
    vector<int> temp;
    int i = l, j = mid + 1;

    while (i <= mid && j <= r) {
      if (arr[i] <= arr[j])
        temp.push_back(arr[i++]);
      else {
        temp.push_back(arr[j++]);
        inversion += mid - i + 1;
      }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);

    int n = temp.size();
    for (int i = 0; i < n; i++) arr[i + l] = temp[i];

    return inversion;
  }

  int mergeSort(vector<int> &arr, int l, int r) {
    int inversion = 0;

    if (l < r) {
      int mid = l + (r - l) / 2;
      inversion += mergeSort(arr, l, mid);
      inversion += mergeSort(arr, mid + 1, r);
      inversion += merge(arr, l, mid, r);
    }

    return inversion;
  }

  int inversionCount(vector<int> &arr) {
    // Your Code Here
    return mergeSort(arr, 0, arr.size() - 1);
  }
};