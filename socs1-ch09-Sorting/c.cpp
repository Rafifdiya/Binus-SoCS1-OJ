#include<stdio.h>
#include<string.h>

struct Mahasigma
{
	char NIM[15];
	char Name[45];
};

int main(){
	Mahasigma mhs[1010];
	FILE *fp; 
	fp = fopen("testdata.in", "r");
	int n;
	fscanf(fp, "%d\n", &n);
	
	//Membaca NIM dan nama Mahasiswa/i
	for (int i = 0; i < n; i++)
	{
		fscanf(fp, "%s %s\n", mhs[i].NIM, mhs[i].Name);
	}
	
	//Bubble sort
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++ )
		{
			if (strcmp(mhs[j].NIM, mhs[j+1].NIM) > 0)
			{
				Mahasigma temp = mhs[j];
				mhs[j] = mhs[j+1];
				mhs[j+1] = temp;
			}
		}
	}
	
	//Menampilkan hasil
	for (int i = 0; i < n; i++){
		printf("%s %s\n", mhs[i].NIM, mhs[i].Name);
	}
	
	return 0;
}
