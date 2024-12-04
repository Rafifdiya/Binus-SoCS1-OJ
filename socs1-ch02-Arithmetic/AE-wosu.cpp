#include<stdio.h>
int main(){
	long long N;
	long long M;
	
	scanf("%lld",&N);
	M = N * 100 + 50 * (N*(N-1)) / 2;
	printf("%lld\n",M);
	
	return 0;
}
