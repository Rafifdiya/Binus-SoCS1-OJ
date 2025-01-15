#include <stdio.h>

int main() {
    FILE *fp = fopen("amba.txt", "r");

    if (fp == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    char buffer[100]; // Buffer untuk membaca baris
    
    while (fgets(buffer, sizeof(buffer), fp)) { // Membaca file baris per baris
        int angka = 0;
        int adaAngka = 0;

        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] >= '0' && buffer[i] <= '9') { // Memeriksa apakah karakter adalah angka
                angka = angka * 10 + (buffer[i] - '0'); // Membuat angka dari karakter
                adaAngka = 1;
            } else if (adaAngka) { // Jika selesai membaca angka (bertemu karakter non-angka)
                printf("%d\n", angka);
                angka = 0;
                adaAngka = 0;
            }
        }

        // Jika angka terakhir belum dicetak
        if (adaAngka) {
            printf("%d\n", angka);
        }
    }

    fclose(fp);
    return 0;
}
