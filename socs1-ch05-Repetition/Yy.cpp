#include <stdio.h>

int main()
{

    long long n;
    int dice, square = 0;

    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dice);
        square += dice;

        if (square >= 40)
        {
            square -= 40;
        }
        if (square == 30)
        {
            square = 10; 
        }
        else if (square == 12)
        {
            square = 28; 
        }
        else if (square == 35)
        {
            square = 7; // Mirip mirip uler tangga
        }
    }

    printf("%d\n", square);
    return 0;
}
