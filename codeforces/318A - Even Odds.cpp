#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2)          // there are always (n+1)/2 odd numbers in n natural numbers from 1 to n
        cout << 2 * k - 1 << endl; // n-th odd number --> 2*n - 1
    else
        cout << (k - (n + 1) / 2) * 2 << endl; // n-th even number --> 2*n
    /*
    1 2 3 4 5 6 7
    1 3 5 7 2 4 6
    here 6th term is = (6 - ((7 + 1) / 2)) * 2 = 4
    if k-th term is m-th even number
    m-th even number --> 2*m = 2 * (k- (n+1)/2)
    (n+1)/2 --> number of odd numbers in n natural numbers
    */
    return 0;
}