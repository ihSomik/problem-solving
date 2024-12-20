#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, c = 1;
    cin >> t;
    while (t--) {
        int N, H, Ta, Tb;
        cin >> N >> H >> Ta >> Tb;

        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        sort(A.begin(), A.end());

        long long time = 0;
        int l = 0, r = N - 1;

        while (l <= r) {
            if (l < r && Tb < Ta + Ta && A[l] + A[r] < H) {
                time += Tb;
                l++;
                r--;
            } else {
                time += Ta;
                r--;
            }
        }

        cout << "Case " << c++ << ": " << time << endl;
    }
}
