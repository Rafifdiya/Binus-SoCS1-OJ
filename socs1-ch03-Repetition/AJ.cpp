#include <stdio.h>

int main (){
	
	int N, A, sum = 0;
	scanf ("%d", &N);
	
	for (int i = 0; i < N; i++){
		scanf ("%d", &A);
		sum += A;
	}
	printf ("%d\n", sum);
	
	return 0;
}

