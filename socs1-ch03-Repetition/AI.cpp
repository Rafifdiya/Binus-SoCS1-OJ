#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; ++i) {
        int N;
        scanf("%d", &N);

        if (N <= 0) {
            printf("Case #%d: No\n", i);
            continue;
        }

        int arr[N];
        long long int total = 0;

        for (int j = 0; j < N; ++j) {
            scanf("%d", &arr[j]);
            total += arr[j];
        }

        // Check apakah jumlah total adalah bilangan genap
        if (total % 2 == 0) {
            long long int half = total / 2;
            long long int currentSum = 0;
            int possible = 0;

            for (int j = 0; j < N; ++j) {
                currentSum += arr[j];
                if (currentSum == half) {
                    possible = 1;
                    break;
                }
            }

            if (possible) {
                printf("Case #%d: Yes\n", i);
            } else {
                printf("Case #%d: No\n", i);
            }
        } else {
            printf("Case #%d: No\n", i);
        }
    }

    return 0;
}

