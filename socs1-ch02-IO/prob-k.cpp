#include <stdio.h>

int main(){
	char a[101],x[9];
	int y;
	scanf("%[^\n]s",&a);
	scanf("%s %d",&x, &y);
	printf("Name: %s\nNIS: %s\nAge: %d\n",a,x,y);
	return 0;
}
