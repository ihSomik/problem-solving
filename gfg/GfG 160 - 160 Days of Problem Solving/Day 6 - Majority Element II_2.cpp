class Solution {
 public:
  vector<int> findMajority(vector<int>& arr) {
    // Boyer-Moore Voting Algorithm
    int n = arr.size();
    int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;
    for (int a : arr) {
      if (a == candidate1)
        count1++;
      else if (a == candidate2)
        count2++;
      else if (count1 == 0) {
        candidate1 = a;
        count1++;
      } else if (count2 == 0) {
        candidate2 = a;
        count2++;
      } else {
        count1--;
        count2--;
      }
    }

    count1 = count2 = 0;
    for (int a : arr)
      if (a == candidate1)
        count1++;
      else if (a == candidate2)
        count2++;

    vector<int> candidates;
    if (count1 > n / 3) candidates.push_back(candidate1);
    if (count2 > n / 3) candidates.push_back(candidate2);

    sort(candidates.begin(), candidates.end());

    return candidates;
  }
};