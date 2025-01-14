#include <stdio.h>

int main (){
	
	long int N;
	scanf ("%ld", &N);
	long long int A, jumlah = 0;
	for (int i = 0; i < N; i++){
		scanf ("%ld", &A);
		if(A < 0){
			jumlah += 0;
		}
		else{
			jumlah += A;
		}
	}
	printf ("%ld\n", jumlah);
	
	return 0;
}

