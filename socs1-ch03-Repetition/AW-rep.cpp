#include<stdio.h>
int main(){
	int T; // Input berapa banyak KELAS di sekolah
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++)
	{
		int N; // input banyak MURID di kelas
		scanf("%d", &N);
		
		int A[N];
		int nilaiTertinggi = 0;
		int TotalSama = 0;
		
		for(int j = 0; j < N; j++){
			scanf("%d", &A[j]); //input tiap NILAI MURID di kelas ke-T
			
			if (A[j] > nilaiTertinggi){
				nilaiTertinggi = A[j];
				TotalSama = 1;
			} else if (A[j] == nilaiTertinggi) {
				TotalSama++;
			}
		}
			printf("Case #%d: %d\n", i, TotalSama);
	}
	
	return 0;
}


