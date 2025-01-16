#include <stdio.h>
#include <string.h>

// Deklarasi struct untuk menyimpan data mahasiswa NIM dan Nama
struct strc_mhs {
    char NIM[11];
    char nama[20];
};

int main() {
    struct strc_mhs mahasigma[11];
    FILE* fp = fopen("testdata2.in", "r");
    if (!fp) {
        printf("File tidak ditemukan, harap buat terlebih dahulu!");
        return 1;
    }

    int banyak_mhs;
    fscanf(fp, "%d\n", &banyak_mhs);

    // Membaca data mahasiswa dari file
    for (int i = 0; i < banyak_mhs; i++) {
        fscanf(fp, "%s %s\n", mahasigma[i].NIM, mahasigma[i].nama);
    }

    fclose(fp);

    // Bubble sort untuk mengurutkan NIM mahasiswa dari terendah ke tertinggi
    for (int i = 0; i < banyak_mhs - 1; i++) {
        for (int j = 0; j < banyak_mhs - i - 1; j++) {
            if (strcmp(mahasigma[j].NIM, mahasigma[j + 1].NIM) > 0) {
                // Menukar posisi jika NIM[j] lebih besar dari NIM[j+1]
                struct strc_mhs temp = mahasigma[j];
                mahasigma[j] = mahasigma[j + 1];
                mahasigma[j + 1] = temp;
            }
        }
    }

    // Menampilkan hasil sorting
    for (int i = 0; i < banyak_mhs; i++) {
        printf("%s %s\n", mahasigma[i].NIM, mahasigma[i].nama);
    }

    return 0;
}
