#include <stdio.h>

int main (){
	
	int num;
	char name[101], id[11], kelas;
	
	scanf("%s\n", &id);
  	scanf("%[^\n]\n", &name);
  	scanf("%c %d", &kelas, &num);
	printf("Id    : %s\n", id);
	printf("Name  : %s\n", name);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", num);
	
	
	return 0;
}
