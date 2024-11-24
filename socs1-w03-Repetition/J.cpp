#include<stdio.h>
int main(){
	int T, N;
	//banyak nya testcase
	scanf("%d", &T);
	
	//loop untuk testcase
	for (int i = 1; i <= T; i++){ 
		
		//total sementara untuk tiap testcase
		long long totalbarang = 0;
		
		//loop untuk banyak isi
		scanf("%d", &N);
		
		//loop untuk isi isi nya
		for (int j = 1; j <= N; j++) {
			long long isi;
			scanf("%lld", &isi);
			totalbarang += isi;
		}
		
		//hasil kesimpulan sum isi
		printf("Case #%d: %lld\n", i, totalbarang);
	}

	return 0;
}
