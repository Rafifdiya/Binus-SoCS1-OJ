#include<stdio.h>
#include<string.h>
int main(){

char line[100]; // Buffer untuk menyimpan string
FILE *file = fopen("data1.txt", "r");

if (file == NULL) {
    printf("Gagal membuka file!\n");
    return 1;
}

while (fgets(line, sizeof(line), file)) {
    // Hapus karakter newline di akhir baris jika ada
    line[strcspn(line, "\n")] = '\0';

    // Cetak baris tanpa karakter newline
    printf("%s\n", line);
}

fclose(file);
}

