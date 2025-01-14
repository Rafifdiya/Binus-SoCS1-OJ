#include<stdio.h>
int main(){
	int T, N; //Deklarasi variabel T = testcase, N = ukuran segitiga
	scanf("%d", &T); //Banyak nya TC
	
	for (int i = 1; i <= T; i++){ //Loop utama testcase
		scanf("%d", &N); //Input N ukuran segitiga ke samping kiri 
		printf("Case #%d:\n", i); //Jumlah case ke berapa yang sedang berjalan
		
		for (int j = 1; j <= N; j++){ //loop untuk membuat berapa baris/ukuran segitiga sesuai N
		
		//loop untuk membuat segitiga per baris nya
			for (int k = 1; k <= N; k++){ 
				if (k <= N-j){ 
					printf(" ");
				} else if((k+j) % 2 == 0){
					printf("*");
				} else if((k+j) % 2 == 1){
					printf("#");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
