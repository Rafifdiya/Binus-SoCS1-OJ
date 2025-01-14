#include <stdio.h>

int main (){
	
	int T;
	scanf ("%d", &T);
	int A, sum = 0;
	int arr[1001] = {0};
	for (int i = 0; i < T; i++){
		scanf ("%d", &A);
		arr[A]++;
		
		if (arr[A] > sum){
			sum = arr[A];
		}
	}
	printf ("%d\n", sum);
	return 0;
}
