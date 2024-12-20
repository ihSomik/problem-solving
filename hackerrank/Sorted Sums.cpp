#include <bits/stdc++.h>
using namespace std;
#define A_LIMIT 1000000
#define M 1000000007

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sortedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_aAY a as parameter.
 */

class FWT {
   public:
    int n;
    vector<int> a;

    FWT(int n) : n(n), a(n + 1, 0) {}

    void add(int x, int k) {
        for (int i = x; i <= n; i += i & -i) a[i] = (a[i] + k) % M;
    }

    int rank(int x) const {
        int res = 0;
        for (int i = x; i > 0; i -= i & -i) res = (res + a[i]) % M;

        return res;
    }
};

int calculateSum(const list<int> &l) {
    int sum = 0;
    int k = 1;

    for (int i : l) {
        sum += k * i;
        k++;
    }

    return sum;
}

int sortedSum(vector<int> a) {
    FWT pre(A_LIMIT + 1);
    FWT post(A_LIMIT + 1);
    int cur_fn = 0, ans = 0, total = 0;

    for (int i = 0; i < a.size(); i++) {
        int pos = pre.rank(a[i]) + 1;
        int greater = (total - post.rank(a[i])) % M;
        if (greater < 0) greater += M;

        cur_fn = (cur_fn + 1LL * pos * a[i] % M + greater) % M;
        ans = (ans + cur_fn) % M;

        pre.add(a[i], 1);
        post.add(a[i], a[i]);
        total = (total + a[i]) % M;
    }
    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_count_temp;
    getline(cin, a_count_temp);

    int a_count = stoi(ltrim(rtrim(a_count_temp)));

    vector<int> a(a_count);

    for (int i = 0; i < a_count; i++) {
        string a_item_temp;
        getline(cin, a_item_temp);

        int a_item = stoi(ltrim(rtrim(a_item_temp)));

        a[i] = a_item;
    }

    int result = sortedSum(a);

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
