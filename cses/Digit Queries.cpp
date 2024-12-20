// Digit Queries
// https://cses.fi/problemset/task/2431
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    ll k;
    cin >> k;

    ll lengthOfNumbers = 1;  // Current length of numbers (1-digit, 2-digit, etc.)
    ll countOfNumbers = 9;   // Number of numbers of the current length
    ll startingNumber = 1;   // The starting number for the current length

    // Determine the length of the number containing the k-th digit
    while (k > lengthOfNumbers * countOfNumbers) {
        k -= lengthOfNumbers * countOfNumbers;  // Reduce k by the number of digits contributed by the current length
        lengthOfNumbers++;                      // Move to the next length of numbers
        countOfNumbers *= 10;                   // Update the count of numbers of the new length
        startingNumber *= 10;                   // Update the starting number for the new length
    }

    startingNumber += (k - 1) / lengthOfNumbers;      // Find the actual number that contains the k-th digit
    string numberString = to_string(startingNumber);  // Convert the number to a string to access individual digits

    cout << numberString[(k - 1) % lengthOfNumbers] << endl;  // Calculate the position of the k-th digit within the number
}

int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--) solve();
}
