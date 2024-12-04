#include<stdio.h>
#include<string.h>

struct data
{
	int number;
	char plant[45];
};

int main(){
	struct data Data[1010];
	FILE *fp = fopen("testdata.in", "r");
	int n;
	fscanf(fp, "%d\n", &n);
	
	//Membaca NIM dan nama Mahasiswa/i
	for (int i = 0; i < n; i++)
	{
		fscanf(fp, "%d#%[^\n]\n", &Data[i].number, &Data[i].plant);
	}
	
	//Bubble sort
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++ )
		{
			if (strcmp(Data[j].plant, Data[j+1].plant) > 0)
			{
				struct data temp = Data[j];
				Data[j] = Data[j+1];
				Data[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d %s\n", Data[i].number, Data[i].plant);
	}
	
	return 0;
}
