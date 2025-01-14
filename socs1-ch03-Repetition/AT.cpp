#include <stdio.h>

int main (){
	
	int T;
	scanf ("%d", &T); 
	int A;
	for (int i = 0; i < T; i++){
		scanf ("%d", &A);
		for (int j = 0; j < A; j++){
			for (int k = 0; k < A - j - 1; k++){
				printf (" ");
			}
			for (int l = 0; l < 2 * j + 1; l++){
				printf ("*");
			}
			printf ("\n");
		}
	}
	return 0;
}

