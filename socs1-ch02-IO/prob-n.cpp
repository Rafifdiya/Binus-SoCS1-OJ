#include <stdio.h>

int main(){
	
	char A[101], B[101];
	int XA, YB;
	double ZA, ZB;
	
	scanf("%s %lf %d %s %lf %d", &A, &ZA, &XA, &B, &ZB, &YB);
	printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\nName 2: %s\nHeight 2: %.2lf\nAge 2: %d\n", A, ZA, XA, B, ZB, YB);
	
	return 0;
}
