#include <stdio.h>

int main() {
	const double PI = 3.14159;
	double diameter, C;
	
	printf("\nEnter the diameter of the circle's : ");
	scanf("%lf", &diameter);
	
	C = 2 * PI * diameter;
	
	printf("%lf", C);
	
	return 0;
}
