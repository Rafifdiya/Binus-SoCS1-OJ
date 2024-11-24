//Problem AA
#include<stdio.h>
int main(){
    //deklarasi banyak orang, kamar, jumlah orang yang tidak happy
    long long n, num[5005], nothappy=0; 
    //jumlah tamu untuk berapa banyak kamar
    scanf("%lld", &n); 
    //dari jumlah tamu untuk input nomer kamar nya sesuai jumlah tamu
    for (int i = 0; i < n; i++) {
        scanf("%lld", &num[i]);  //num[i] = nama kamar/jumlah kamar, bisa sama

        //untuk cek kondisi kamar yang sama
        int kondisi = 1;

        //
        for (int j = 0; j < i; j++) { 
            if ( num[i] == num[j] ) {
                kondisi = 0;
                break;
            }
        }
        if (kondisi) {
            nothappy++;
        }

    } 

    printf("%d\n", nothappy);

    return 0;
}