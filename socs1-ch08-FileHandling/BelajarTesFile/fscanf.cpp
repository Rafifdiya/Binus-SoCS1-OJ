#include <stdio.h>

int main() {
    FILE *fp = fopen("fscanf.txt", "r");  // Mode "r" untuk membaca

    if (fp == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    int angka;
    if (fscanf(fp, "%d", &angka) == 1) { // Berhasil membaca satu angka
        printf("Angka di file: %d\n", angka);
    } else {
        printf("Tidak ada data yang bisa dibaca di file.\n");
    }

    fclose(fp);
    return 0;
}
