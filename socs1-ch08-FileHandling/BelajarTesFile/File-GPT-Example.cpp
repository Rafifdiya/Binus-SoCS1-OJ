#include <stdio.h>

int main() {
    FILE *file_masukan, *file_keluaran;
    int bilangan, total = 0;

    // Membuka file input
    file_masukan = fopen("input.txt", "r");
    if (file_masukan == NULL) {
        printf("Error: File input tidak ditemukan.\n");
        return 1;
    }

    // Membaca data dari file input
    while (fscanf(file_masukan, "%d", &bilangan) != EOF) {
        total += bilangan;
    }
    fclose(file_masukan);

    // Membuka file output
    file_keluaran = fopen("output.txt", "w");
    if (file_keluaran == NULL) {
        printf("Error: File output tidak bisa dibuat.\n");
        return 1;
    }

    // Menulis hasil ke file output
    fprintf(file_keluaran, "Total: %d\n", total);
    fclose(file_keluaran);

    printf("Proses selesai. Total: %d telah ditulis ke output.txt\n", total);
    return 0;
}
