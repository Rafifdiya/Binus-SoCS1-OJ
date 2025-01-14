#include <stdio.h>

int main (){
	
	int N;
	scanf ("%d", &N);
	int A[N];
	for (int i = 0; i < N; i++){
		scanf ("%d", &A[i]);
	}
	for (int i = 0; i < N; i++){
		if (A[i] == 1){
			if (i > 0){
				printf ("%d ", A[i - 1]);
			}
		}
	}
	
	if (N > 0){
		printf ("%d\n", A[N - 1]);
	}
	
	return 0;
}

