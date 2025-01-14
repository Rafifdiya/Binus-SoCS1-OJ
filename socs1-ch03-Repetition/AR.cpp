#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (k < N - 1 - j) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

