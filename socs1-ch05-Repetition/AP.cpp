#include <stdio.h>


int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        long long int K;
        char S[101];
        scanf("%d %lld %s", &N, &K, &S);

        printf("Case #%d: ", i + 1);
        for (int k = 0; k < N; k++){
            int num = S[k] - 'a';
            num = (num + K) %  26;
            printf("%c", num + 'a');
        }
        printf("\n");
    }
    return 0;
}

