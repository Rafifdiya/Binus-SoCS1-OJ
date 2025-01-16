#include <stdio.h>
#include <string.h>

int main() {
    int t; // Banyaknya test case
    scanf("%d", &t);
    getchar(); // Mengambil karakter newline setelah angka
    
    for (int i = 1; i <= t; i++) {
        char s[1001], u[27];
        int frekuensi[26] = {0}; // Array untuk menyimpan frekuensi huruf
        
        // Baca string S
        scanf("%s", s);
        // Baca string U
        scanf("%s", u);

        // Hitung frekuensi setiap huruf di string S
        for (int j = 0; s[j] != '\0'; j++) {
            frekuensi[s[j] - 'a']++;
        }

        // Cetak hasil sesuai urutan dalam U
        printf("Case %d: ", i);
        for (int j = 0; u[j] != '\0'; j++) {
            char huruf = u[j];
            while (frekuensi[huruf - 'a'] > 0) {
                printf("%c", huruf);
                frekuensi[huruf - 'a']--;
            }
        }
        printf("\n");
    }

    return 0;
}

3
abcabcabc
ba
aeeaaeaeffgg
eag
gfhefhgehfgijijkk
hgk