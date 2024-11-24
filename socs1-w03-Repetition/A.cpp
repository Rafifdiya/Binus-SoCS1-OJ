//Problem A
#include<stdio.h>
int main(){
	int Awal, Batas, Jumlah;
	scanf("%d %d", &Awal, &Batas);
	Jumlah = Awal + Batas;
	for (Awal; Awal < Jumlah; Awal++ ) {
		printf("%d\n", Awal);
	}

return 0;
}
