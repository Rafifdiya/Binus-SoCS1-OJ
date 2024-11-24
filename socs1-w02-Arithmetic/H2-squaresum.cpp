#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	double E = a/1 + b/2 + c/3 + d/4
			 + b/2 + c/3 + d/4 + c/3
			 + c/3 + d/4 + c/3 + b/2
			 + d/4 + c/3 + b/2 + a/1;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	double F = a/1 + b/2 + c/3 + d/4
			 + b/2 + c/3 + d/4 + c/3
			 + c/3 + d/4 + c/3 + b/2
			 + d/4 + c/3 + b/2 + a/1;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	double G = a/1 + b/2 + c/3 + d/4
			 + b/2 + c/3 + d/4 + c/3
			 + c/3 + d/4 + c/3 + b/2
			 + d/4 + c/3 + b/2 + a/1;
	
	printf("%.2f\n",E);
	printf("%.2f\n",F);
	printf("%.2f\n",G);
	
	return 0;
}
