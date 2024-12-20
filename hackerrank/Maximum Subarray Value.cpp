#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxSubarrayValue' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

long maxSubarrayValue(vector<int> arr) {
    int n = arr.size();

    long long even_sum = 0, odd_sum = 0;
    long long max_diff_square = 0;

    long long min_diff = 0;
    long long max_diff = 0;

    for (int i = 0; i < n; ++i) {
        if (i & 1)
            odd_sum += arr[i];
        else
            even_sum += arr[i];

        long long diff = even_sum - odd_sum;

        max_diff_square = max(max_diff_square, (diff - min_diff) * (diff - min_diff));
        max_diff_square = max(max_diff_square, (diff - max_diff) * (diff - max_diff));

        min_diff = min(min_diff, diff);
        max_diff = max(max_diff, diff);
    }

    return max_diff_square;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    long result = maxSubarrayValue(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
