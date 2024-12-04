1//Problem E
#include<stdio.h>
int main (){
	int T;
	scanf("%d", &T); //Jumlah test case
	
	for (int i = 0; i < T; i++){ //Berapa kali loop sesuai banyak test case "T" nya
		int X, P;
		scanf("%d %d", &X, &P); //input X = angka konversi ke Biner, P = posisi bit dari kanan
		
		int posisibit = (X >> P) & 1; //ambil nilai bit posisi p dari x cuyh
		
		printf("%d\n", posisibit); //Output dari posisi biner ke berapa nya
	}
	
	return 0;
}
