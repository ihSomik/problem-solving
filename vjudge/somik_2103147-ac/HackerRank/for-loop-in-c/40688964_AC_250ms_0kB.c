#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    
    char spelling [10] [6] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i=a; i<=b; i++)
    {
        if(i<=9)
            printf("%s\n",spelling[i]);

        else if(i&1)
            printf("odd\n");

        else
            printf("even\n");
    }

    return 0;
}
