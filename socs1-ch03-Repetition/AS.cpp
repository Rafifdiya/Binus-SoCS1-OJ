#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);

        char S[101], K[101];
        scanf("%s", S);
        scanf("%s", K);

        int correct = 0;
        for (int j = 0; j < N; j++) {
            if (S[j] == K[j]) {
                correct++;
            }
        }

        int G = (correct * 100) / N;
        printf("Case #%d: %d\n", i, G);
    }

    return 0;
}


