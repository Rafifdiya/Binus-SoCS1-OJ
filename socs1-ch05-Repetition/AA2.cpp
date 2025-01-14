#include <stdio.h>

int main()
{

    long long n;
    int dice, posisi = 0;

    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dice);
        posisi += dice;

        if (posisi > 30000)
        {
            posisi = 30000;
        }

        switch (posisi)
        {
            // LADDER
        case 9:
            posisi = 21;
            break;
        case 33:
            posisi = 42;
            break;
        case 76:
            posisi = 92;
            break;

            // SNAKES
        case 53:
            posisi = 37;
            break;
        case 80:
            posisi = 59;
            break;
        case 97:
            posisi = 88;
            break;
        }
    }

    printf("%d\n", posisi);
    return 0;
}
