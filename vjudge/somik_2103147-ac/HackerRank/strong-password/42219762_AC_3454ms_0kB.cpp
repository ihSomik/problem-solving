#include <iostream>
using namespace std;

int minNumber(int n, string pass)
{
    int count(0);
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    for (int i = 0; i < n; i++)
    {
        if (isdigit(pass[i]))
            hasDigit = true;
        else if (islower(pass[i]))
            hasLower = true;
        else if (isupper(pass[i]))
            hasUpper = true;
        else if (ispunct(pass[i]))
            hasSpecial = true;
    }

    if (!hasDigit)
        count++;
    if (!hasLower)
        count++;
    if (!hasUpper)
        count++;
    if (!hasSpecial)
        count++;

    return max(count, 6 - n);
}

int main()
{
    int n;
    cin >> n;
    string pass;
    cin >> pass;

    cout << minNumber(n, pass);

    return 0;
}
