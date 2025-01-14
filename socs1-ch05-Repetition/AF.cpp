#include <stdio.h>

int jumlahBitHidup(int bilangan) {
    int hitung = 0;
    while (0 < bilangan) {
        if (bilangan % 2 == 1) hitung++;
        bilangan /= 2;
    }
    return hitung;
}

void solusi() {
    int jumlahAngka;
    scanf("%d", &jumlahAngka);
    int angka[jumlahAngka];
    for (int i = 0; i < jumlahAngka; i++) {
        scanf("%d", &angka[i]);
    }
    
    int jumlahPasanganBit3 = 0, jumlahPasanganBitKurang3 = 0;
    for (int i = 0; i < jumlahAngka; i++) {
        for (int j = i + 1; j < jumlahAngka; j++) {
            int hasilXOR = (angka[i] ^ angka[j]);
            
            if (jumlahBitHidup(hasilXOR) >= 3) {
                jumlahPasanganBit3++;
            } else {
                jumlahPasanganBitKurang3++;
            }
        }
    }
    printf("%d %d\n", jumlahPasanganBit3, jumlahPasanganBitKurang3);
    return;
}

int main() {
    int jumlahKasus;
    scanf("%d", &jumlahKasus);
    for (int kasus = 1; kasus <= jumlahKasus; kasus++) {
        printf("Case #%d: ", kasus);
        solusi();
    }
    
    return 0;
}

