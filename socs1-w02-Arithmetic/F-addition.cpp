#include <stdio.h>
int main(){
	int a, b, c, d, e, f;
	
	scanf("%d + %d =", &a, &b);
	getchar();
	scanf("%d + %d =", &c, &d);
	getchar();
	scanf("%d + %d =", &e, &f);
	
	int tot1 = a + b, tot2 = c + d, tot3 = e + f;
	
	printf("%d\n", tot1);
	printf("%d\n", tot2);
	printf("%d\n", tot3);
	
	
	return  0;
}
