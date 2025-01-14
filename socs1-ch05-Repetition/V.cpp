#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < t; i++)
    {
        for (int x = 0; x < n[i]; x++) 
        {
            for (int y = 0; y < n[i]; y++) 
            {
                if (x == 0 || x == n[i] - 1 || y == 0 || y == n[i] - 1 || x == y || x == n[i] - 1 - y)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n"); 
        }
        printf("\n");
    }

    return 0;
}

