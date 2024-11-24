#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T); // Banyak test case

    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &A, &B); // A adalah jumlah madu mula-mula, B adalah jumlah botol kosong yang bisa ditukar dengan 1 botol baru

        int total = A; // Jumlah madu yang diminum, mulai dengan semua botol awal
        int emptyBottles = A; // Mulai dengan jumlah botol kosong yang akan terus ditukar

        // Loop hingga botol kosong tidak cukup lagi untuk ditukar
        while (emptyBottles >= B) {
            int newBottles = emptyBottles / B; // Botol baru yang diperoleh dari penukaran
            total += newBottles; // Tambahkan botol baru yang diminum ke total
            emptyBottles = newBottles + (emptyBottles % B); // Perbarui jumlah botol kosong
        }

        printf("Case #%d: %d\n", i, total); // Output jumlah madu yang habis diminum
    }

    return 0;
}

