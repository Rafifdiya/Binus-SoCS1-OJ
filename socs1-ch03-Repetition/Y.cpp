#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n[t], m[t];
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n[i], &m[i]);
    }

    
    for (int i = 0; i < t; i++)
    {  
        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < n[i]; j++) 
        {
            for (int k = 0; k < m[i]; k++) 
            {
                if (j == 0 || j == n[i] - 1 || k == 0 || k == m[i] - 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n"); 
        }
    }

    return 0;
}

