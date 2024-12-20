#include <bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

int upper_bound(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}


int main()
{
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++)
        cin >> h[i];

    int q;
    cin >> q;
    while (q--)
    {
        int hLB; // height of Luchu Bandor
        cin >> hLB;

        int s = lower_bound(h, n, hLB) - 1;
        if (s < 0)
            cout << "X ";
        else
            cout << h[s] << " ";

        int t = upper_bound(h, n, hLB);
        if (t >= n)
            cout << "X" << endl;
        else
            cout << h[t] << endl;
    }

    return 0;
}