#include<stdio.h>
int main(){
    int x[4], y[4];  // Array untuk menyimpan 4 nilai x dan y

    // Loop untuk menerima 4 baris input
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &x[i], &y[i]);  // Membaca input x dan y untuk setiap baris
    }

    // Loop untuk menampilkan 4 hasil output sekaligus
    for (int i = 0; i < 4; i++) {
        printf("%d\n", x[i] * y[i]);
    }

    return 0;
}