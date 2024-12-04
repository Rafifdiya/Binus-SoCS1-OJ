#include<stdio.h>

int main(){
	long long int N;
	long long int A[10000001];
	
	scanf("%lld", &N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &A[i]);
	}
	
	
	for (int i = 0; i < N; i++)
	{
		printf("%lld ", A[i]);
	}
	
	
	return 0;
}
