#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);  // Baca jumlah test case
    
    for (int t = 1; t <= T; t++) {
        //menyimpan kalimat awal, dan target huruf
        char S[1001], U[27];

        //menghitung frek huruf
        int frekuensi[26] = {0};
        
        // Baca string S dan urutan U
        scanf("%s", S);
        scanf("%s", U);
        
        // Hitung frekuensi karakter yang ada di S, tetapi hanya yang ada di U
        for (int i = 0; S[i] != '\0'; i++) { 
            for (int j = 0; U[j] != '\0'; j++) {
                if (S[i] == U[j]) {
                    frekuensi[S[i] - 'a']++;
                }
            }
        }
        
        // Mengurutkan urutan karakter di U berdasarkan alfabet
        int n = strlen(U);
        
        // printf("%d", n);
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (U[i] > U[j]) {
                    // Tukar karakter di U[i] dan U[j]
                    char temp = U[i];
                    U[i] = U[j];
                    U[j] = temp;
                }
            }
        }
        
        // Output hasil sesuai urutan di U yang sudah diurutkan alfabet
        printf("Case %d: ", t);
        
        // Menyusun hasil output berdasarkan frekuensi karakter yang terurut
        for (int i = 0; U[i] != '\0'; i++) {
            int index = U[i] - 'a';  // Menentukan indeks karakter di alphabet
            for (int j = 0; j < frekuensi[index]; j++) {
                printf("%c", U[i]);  // Cetak karakter sesuai frekuensi
            }
        }
        
        // Setelah selesai, lanjutkan ke test case berikutnya
        printf("\n");
    }
    
    return 0;
}

// 3
// abcabcabc
// ba
// aeeaaeaeffgg
// eag
// gfhefhgehfgijijkk
// hgk