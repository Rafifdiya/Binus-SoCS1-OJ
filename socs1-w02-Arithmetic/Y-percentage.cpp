#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T); 

    long long P, N;
    double result[T];

    for(int i = 0; i < T; i++) {
        scanf("%lld %lld", &P, &N);
        result[i] = (double)(P * N) / 100.0;
    }

    for(int i = 0; i < T; i++) {
        printf("%.2f\n", result[i]);
    }

    return 0;
}
