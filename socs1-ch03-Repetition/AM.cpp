#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        int N;
        scanf("%d", &N);

        printf("Case #%d:\n", case_num);
        for (int i = 1; i <= N; i++) {
            if ((i % 3 == 0 || i % 5 == 0) && (i % 15 != 0)) {
                printf("%d Jojo\n", i);
            } else {
                printf("%d Lili\n", i);
            }
        }
    }

    return 0;
}


