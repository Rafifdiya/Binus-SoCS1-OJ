#include<stdio.h>
int main(){
	int T; //1
	scanf("%d", &T); 
	
	for (int i = 1; i <= T; i++){ //2
		int A, B; //2.1
		scanf("%d %d", &A, &B); //2.3
		
		int totalBotol = A; //2.4
		int botolKosong = A; //2.5
		
		while(botolKosong >= B){ //3
			int botolBaru = botolKosong / B;
			totalBotol += botolBaru;
			botolKosong = botolBaru + (botolKosong % B);
		}
		printf("Case #%d: %d\n", i, totalBotol); //2.6
	}
	
	
	
	
	
	
	
	return 0;
}
