#include<stdio.h>

int main (){
	
	int M, N;
	scanf("%d %d", &M, &N);
	for ( int i = 0; i < N; i++){
		printf("%d\n", M++);
	}
	
	return 0;
}
