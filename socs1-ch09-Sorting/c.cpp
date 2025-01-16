#include<stdio.h>
#include<string.h>

struct Mahasigma
{
	char NIM[11];
	char Name[45];
};

int main(){
	Mahasigma mhs[101];
	FILE *fp = fopen("testdata2.in", "r");

	int banyak_mahasiswa;
	fscanf(fp, "%d\n", &banyak_mahasiswa);
	
	//Membaca NIM dan nama Mahasiswa/i
	for (int i = 0; i < banyak_mahasiswa; i++)
	{
		fscanf(fp, "%s %s\n", mhs[i].NIM, mhs[i].Name);
	}
	
	//Bubble sort
	for (int i = 0; i < banyak_mahasiswa; i++)
	{
		for (int j = 0; j < banyak_mahasiswa - 1 - i; j++ )
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
	for (int i = 0; i < banyak_mahasiswa; i++){
		printf("%s %s\n", mhs[i].NIM, mhs[i].Name);
	}
	
	return 0;
}
