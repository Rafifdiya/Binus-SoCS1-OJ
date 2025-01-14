#include <stdio.h>
#include <string.h>

int main (){
	
	long long int T;
	char N[300];
	scanf("%lld", &T); getchar();
	
	for (int i = 0; i < T; i++){
		scanf ("%s", &N); getchar();
		int len = strlen(N); //Buat tau panjang nya
		printf("Case #%d: %d\n", i + 1, len);
	}
	
	return 0;
}

