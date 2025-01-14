#include <stdio.h>

int main(){
    int T;
    long long int N, K, A[101];
    int count = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &K);
        for(int j = 0; j < N; j++){
            scanf("%lld", &A[i]);
            if (A[i] >= K){
                count++;
            }
        }
        printf("Case #%d: %d\n", i + 1, count);
        count = 0;
    }

    return 0;
}
