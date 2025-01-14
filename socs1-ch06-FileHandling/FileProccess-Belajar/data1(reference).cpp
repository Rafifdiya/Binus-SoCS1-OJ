#include <stdio.h>
#include <string.h>

int main() {
    FILE *fileX = fopen("data1.txt", "r"); // Membuka file untuk membaca
    if (fileX == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }
    
    // Buffer untuk membaca tiap baris
    char line[100]; 
    
    //fgets ----> Manggil/hambil hanya 1 baris
    //fgets punya 3 parameter
    //1. Simpen, 2. Batas ambil, 3. letak file
    while (fgets(line, sizeof(line), fileX)) { 
    
        // strcspn ----> menghapus/mengganti indeks char
        // Menghapus karakter newline '\n' di akhir baris jika ada
        line[strcspn(line, "\n")] = '\0';

        // Memisahkan data berdasarkan koma (",")
        char *token = strtok(line, ",");
        int col = 0; // Penanda kolom

        while (token != NULL) {
            // Menentukan lebar kolom berdasarkan posisi kolom
            if (col == 0) {
                printf("%-15s", token); // Kolom 1: Lebar 15 karakter
            } else if (col == 1) {
                printf("%-8s", token); // Kolom 2: Lebar 8 karakter
            } else {
                printf("%-12s", token); // Kolom 3: Lebar 12 karakter
            }

            token = strtok(NULL, ","); // Pindah ke elemen berikutnya
            col++;
        }
        printf("\n"); // Baris baru setelah setiap baris file selesai diproses
    }

    fclose(fileX); // Menutup file
    return 0;
}

