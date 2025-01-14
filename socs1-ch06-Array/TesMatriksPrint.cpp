#include <stdio.h>

#define MAX_ROWS 50
#define MAX_COLS 50

int main() {
    int T, rows, cols;
    int matrix[MAX_ROWS][MAX_COLS];

    // Input jumlah test case
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
    	//
        scanf("%d %d", &rows, &cols);

        // Input elemen-elemen matriks
        printf("Masukkan elemen matriks %dx%d:\n", rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Cetak matriks yang diinputkan
        printf("Matriks yang diinputkan untuk test case #%d:\n", t);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

