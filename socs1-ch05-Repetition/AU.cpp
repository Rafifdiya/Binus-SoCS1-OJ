#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        printf("Case #%d: ", i + 1);
        for (int j = 0; j < N; j++) {
            printf("%c", j + 'a');
        }
        printf("\n");
    }
    return 0;
}
