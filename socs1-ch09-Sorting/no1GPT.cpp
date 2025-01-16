#include <stdio.h>

int main() {
    FILE *file = fopen("testdataUAS.txt", "r");
    if (file == NULL) {
        printf("File tidak ditemukan!\n");
        return 1;
    }
    
    int angka, produkGenap = 1, jumlahGanjil = 0;
    int adaGenap = 0;  // Untuk menangani kasus jika tidak ada bilangan genap
    
    while (fscanf(file, "%d", &angka) != EOF) { //2 5 8 10 3
        if (angka % 2 == 0) {
            // Bilangan genap
            produkGenap *= angka;  //160
            adaGenap = 1;
        } else {
            // Bilangan ganjil
            jumlahGanjil += angka;  //8
        }
    }

    // Jika tidak ada bilangan genap, produk harus 0
    if (!adaGenap) {
        produkGenap = 0;
    }

    int hasil = produkGenap - jumlahGanjil;
    printf("%d\n", hasil);
    
    fclose(file);
    return 0;
}
