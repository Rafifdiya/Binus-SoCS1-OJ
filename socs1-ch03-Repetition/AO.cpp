#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);

        char S[N + 1];
        scanf(" %[^\n]", S);  

        printf("Case #%d: ", i);

        for (int j = 0; j < N; j++) {
            if (S[j] >= 'a' && S[j] <= 'z') {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }

    return 0;
}

