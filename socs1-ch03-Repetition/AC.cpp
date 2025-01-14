#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int prices[N];
        long long int maxCandies = 0;

        // Membaca harga permen dan menghitung jumlah permen maksimal yang bisa dibeli
        for (int i = 0; i < N; i++) {
            scanf("%d", &prices[i]);
            int candies = M / prices[i];
            if (candies > maxCandies) {
                maxCandies = candies;
            }
        }

        printf("Case #%d: %lld\n", caseNum, maxCandies);
    }

    return 0;
}

