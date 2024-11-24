//Problem B
#include<stdio.h>
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int Jumlah = N + M;
	for (N; N < Jumlah; N++) {
		printf("%d\n", N);
	}
	
	return 0;
}
