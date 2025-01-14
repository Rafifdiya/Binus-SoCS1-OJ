#include<stdio.h>
int main(){
	int T, N, M; //1
	
	scanf("%d", &T); 
	
	for (int i = 1; i <= T; i++){ //3
		scanf("%d %d", &N, &M); 
		
		int hargatiapmenu[N]; //3.1
		int totalharga = 0; //3.2
		
		for (int j = 0; j < N; j++){ //4
			scanf("%d", &hargatiapmenu[j]);
			totalharga += hargatiapmenu[j];
		}
		
		if( M >= totalharga ){
			printf("Case #%d: No worries\n", i);
		} else {
			printf("Case #%d: Wash dishes\n", i);
		}
		
	}
	
	
	
	
	
	return 0;
}
