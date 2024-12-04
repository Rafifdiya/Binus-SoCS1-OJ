#include<stdio.h> //Problem I
int main() {
    int N, Jojo, Lili, Bibi;
    //Banyak peserta selain JoLiBi
    scanf("%d", &N); 
    
    //Nilai JoLiBi
    scanf("%d %d %d", &Jojo, &Lili, &Bibi); 
    
    //Sum nilai JoLiBi
    int total1 = Jojo + Lili + Bibi;
    
    //Total sum nilai N sementara ( di awal )
    int totalN = 0;
    
    //Loop untuk sum tiap nilai N
    for (int i = 0; i < N; i++){
        int nilaiN;
        scanf("%d", &nilaiN);
        totalN += nilaiN;
    }
    
    //itung jumlah peserta
    int peserta = 3 + N;
    
    //total rata-rata dari semua nilai peserta
    int ratarata = (totalN + total1 ) / peserta;
    
    //hasi kesimpulan untuk JoLiBi lulus atau tidak
    if (Jojo >= ratarata) {
    	printf("Jojo lolos\n");
	} else {
		printf("Jojo tidak lolos\n");
	}
	
	if (Lili >= ratarata) {
    	printf("Lili lolos\n");
	} else {
		printf("Lili tidak lolos\n");
	}
	
	if (Bibi >= ratarata) {
    	printf("Bibi lolos\n");
	} else {
		printf("Bibi tidak lolos\n");
	}
    
	return 0;
}
