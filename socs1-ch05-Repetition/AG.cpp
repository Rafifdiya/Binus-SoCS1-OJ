#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);

        printf("Case %d:", i);
        
        int pieces = 1;
        for (int i = 0; i < N; i++) {
            pieces += i;
            printf(" %d", pieces);
        }

        printf("\n");
    }

    return 0;
}
