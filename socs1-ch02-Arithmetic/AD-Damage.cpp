#include<stdio.h>
int main(){
	int phys;
	int magic;
	int pure;
	float totaldmg;
	
	scanf("%d %d %d",&phys,&magic,&pure);
	totaldmg = (phys * 0.20) + (magic * 0.30) + (pure * 0.50);
	printf("%.2f\n",totaldmg);
	
	return 0;
}
