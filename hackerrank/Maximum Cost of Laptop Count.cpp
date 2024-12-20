#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxCost' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY cost
 *  2. STRING_ARRAY labels
 *  3. INTEGER dailyCount
 */

int maxCost(vector<int> cost, vector<string> labels, int dailyCount) {
    int n = cost.size();
    int max_cost = 0;
    int cur_cnt = 0;
    int cur_cost = 0;

    for (int i = 0; i < n; i++) {
        cur_cost += cost[i];

        if (labels[i] == "illegal") continue;

        cur_cnt++;

        if (cur_cnt == dailyCount) {
            max_cost = max(max_cost, cur_cost);
            cur_cnt = 0;
            cur_cost = 0;
        }
    }

    return max_cost;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<int> cost(n);

    for (int i = 0; i < n; i++) {
        string cost_item_temp;
        getline(cin, cost_item_temp);

        int cost_item = stoi(ltrim(rtrim(cost_item_temp)));

        cost[i] = cost_item;
    }

    string labels_count_temp;
    getline(cin, labels_count_temp);

    int labels_count = stoi(ltrim(rtrim(labels_count_temp)));

    vector<string> labels(labels_count);

    for (int i = 0; i < labels_count; i++) {
        string labels_item;
        getline(cin, labels_item);

        labels[i] = labels_item;
    }

    string dailyCount_temp;
    getline(cin, dailyCount_temp);

    int dailyCount = stoi(ltrim(rtrim(dailyCount_temp)));

    int result = maxCost(cost, labels, dailyCount);

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
