#include <stdio.h>

#define MAX_N 50

int main() {
    int T, N;
    int A[MAX_N][MAX_N], B[MAX_N][MAX_N], C[MAX_N][MAX_N];
    int temp[MAX_N][MAX_N], result[MAX_N][MAX_N];

    // Baca jumlah kasus
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        // Baca ukuran matriks
        scanf("%d", &N);

        // Baca matriks A
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Baca matriks B
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        // Baca matriks C
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &C[i][j]);
            }
        }

        // Step 1: Kalikan matriks A dan B, simpan hasilnya di temp
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                temp[i][j] = 0;
                for (int k = 0; k < N; k++) {
                    temp[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Step 2: Kalikan hasil (temp) dengan matriks C, simpan di result
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                result[i][j] = 0;
                for (int k = 0; k < N; k++) {
                    result[i][j] += temp[i][k] * C[k][j];
                }
            }
        }

        // Cetak hasil untuk kasus ini
        printf("Case #%d:\n", t);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", result[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

