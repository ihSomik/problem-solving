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
        vector<int> entered(N, 0);
        int r = N - 1;

        for (int i = 0; i < N; i++) {
            if (entered[i] == 1) continue;

            while (r > i && (A[i] + A[r] >= H || entered[r] == 1)) r--;

            if (Ta + Ta > Tb && r > i && A[i] + A[r] < H && entered[r] == 0) {
                time += Tb;
                entered[r] = entered[i] = 1;
            } else {
                time += Ta;
                entered[i] = 1;
            }
        }

        cout << "Case " << c++ << ": " << time << endl;
    }
}
