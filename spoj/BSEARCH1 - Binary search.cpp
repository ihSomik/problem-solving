#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    // I was getting the wrong answer for a long time due to fast I/O and the use of `endl`
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    while (q--){
        int t;
        cin >> t;

        int left = 0;
        int right = n - 1;
        int index = -1;

        while (left <= right){
            int mid = left + (right - left) / 2;

            if (a[mid] == t){
                index = mid;
                right = mid - 1;
            }

            else if (a[mid] > t)
                right = mid - 1;

            else
                left = mid + 1;
        }
        cout << index << endl;
    }
}
