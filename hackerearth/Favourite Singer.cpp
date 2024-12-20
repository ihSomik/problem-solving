#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
typedef long long int ll;
typedef unsigned long long ull;
#define endl '\n'

int main() {
    int n;
    cin >> n;

    map<ll, ll> numOfsong;
    ll maxSongs(0);

    while (n--) {
        int singer;
        cin >> singer;
        numOfsong[singer]++;
        maxSongs = max(maxSongs, numOfsong[singer]);
    }

    int count(0);
    for (auto i : numOfsong)
        if (i.second == maxSongs)
            count++;

    cout << count << endl;
}