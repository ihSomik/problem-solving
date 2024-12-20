// Palindrome Reorder
// https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    // Count the frequency of each character in the string
    for (char c : s)
        freq[c - 'A']++;

    int oddChars(0);

    for (int i = 0; i < 26; i++)
        if (freq[i] & 1)
            oddChars++;

    // if there is more than one character with odd frequency, it's impossible to make a palindrome
    if (oddChars > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    // construct the first half of the palindrome
    string palindrome;
    for (int i = 0; i < 26; i++)
    {
        if (!(freq[i] & 1))
        {
            int cnt = freq[i] / 2;
            while (cnt--)
                palindrome += char('A' + i);
        }
    }

    // construct the second half of the palindrome by reversing the first half
    string secondHalf = palindrome;
    reverse(secondHalf.begin(), secondHalf.end());

    // if there is a character with odd frequency, place it in the middle
    for (int i = 0; i < 26; i++)
        if (freq[i] & 1)
            for (int j = 0; j < freq[i]; j++)
                palindrome += char('A' + i);

    // append the reversed first half to complete the palindrome
    palindrome += secondHalf;

    cout << palindrome << endl;

    return 0;
}