#include <stdio.h>

int main() {
    FILE *fp = fopen("fscanf.txt", "r");  // Mode "r" untuk membaca

    if (fp == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    int a, b, c;
    char str1[100], str2[100];

    // Membaca dan menampilkan data dengan fgets dan sscanf
    while (fgets(str1, sizeof(str1), fp)) {
        if (sscanf(str1, "%d %d %s", &a, &b, str2) == 3) {
            printf("%d %d %s\n", a, b, str2);  // Menampilkan baris pertama dan kedua
        } else if (sscanf(str1, "%s %s %d", str1, str2, &c) == 3) {
            printf("%s %s %d\n", str1, str2, c);  // Menampilkan baris kedua
        } else if (sscanf(str1, "%d", &a) == 1 ) {
            printf("%d\n", a);  // Menampilkan integer di baris ketiga dan keempat
        }
    }

    fclose(fp);
    return 0;
}
