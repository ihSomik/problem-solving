#include <iostream>
using namespace std;

int main ()
{
    int y, a, b, c, d;
    cin>>y;

    while(y)
    {
        y++;

        a=y/1000;       //first digit of the year
        b=(y/100)%10;   //second digit of the year. for example, dividing 1987 by 10 gives the quotient 19, dividing 19 by 10 again gives the remainder 9.
        c=(y/10)%10;    //third digit of the year
        d=(y%10);       //fourth digit of the year

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }

    cout<<y;
    return 0;
}
