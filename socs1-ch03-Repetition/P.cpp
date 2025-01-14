#include <stdio.h>

int main (){
	
	int T;
	scanf ("%d", &T);
	int K;
	for (int i = 0; i < T; i++){
		scanf ("%d", &K);
		printf ("Case #%d: ", i + 1);
		int lompat = 0;
		int jarak = 0;
		while (jarak < K){
			lompat++;
			jarak += lompat;
		}
		printf ("%d\n", lompat);
	}
	
	
	
	return 0;
}
