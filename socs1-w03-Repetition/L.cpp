#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T); //Banyak TC

    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &A, &B); // A jumlah madu mula-mula, B jumlah botol kosong yang bisa ditukar dengan 1 botol baru

        int total = A; //Jumlah madu yang bisa diminum, total akhir, tujuan
        int botolKosong = A; //Jumlah botol kosong yang dapat ditukar dengan 1 botol baru sesuai syarat B

        //Loop sampe botol gabisa dituker lagi
        while (botolKosong >= B) {
            int botolBaru = botolKosong / B; // Botol baru yang dapet dari tukeran
            total += botolBaru; // Botol baru ditambahin ke total botol yang kita punya
            botolKosong = botolBaru + (botolKosong % B); //Jumlah botol kosong buat cek bisa dituker lagi apa ga
        }

        printf("Case #%d: %d\n", i, total); // Output jumlah madu yang abis diminum
    }

    return 0;
}

