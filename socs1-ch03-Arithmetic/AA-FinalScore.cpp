#include<stdio.h>
int main(){
	long long N;
	int M;
	long long totaldmg;
	int basedmg;
	int bonusdmg;
	
	
	scanf("%lld",&N);
	for (M=1; M <=N; M++ ) {
		totaldmg += basedmg + bonusdmg;
		bonusdmg += 50;
	}
	
	return 0;
}
