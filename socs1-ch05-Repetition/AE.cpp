#include <stdio.h>

int main (){
	
	int Tc;
	scanf ("%d", &Tc);
	double Radius[Tc], Height[Tc];
	
	for (int i = 0; i < Tc; i++){
		scanf("%lf %lf", &Radius[i], &Height[i]); getchar();
	}
	for (int i = 0; i<Tc;i++){
		printf("Case #%d: %.2lf\n", i + 1, (2 * 3.14 * Radius[i] * Radius[i])+(2 * 3.14 * Radius[i] * Height[i]));
	}	
	
	return 0;
}

