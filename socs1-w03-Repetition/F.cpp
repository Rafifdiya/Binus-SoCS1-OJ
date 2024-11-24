#include <stdio.h>

int main() {
    int N, K; //N besar, K syarat DONE!!!
    
    //N syarat
    scanf("%d %d", &N, &K);
    
    //buat # ukuran N x N
    for (int i = 0; i < N; i++) { //1
        for (int j = 0; j < N; j++) { 
            printf("#"); 
        }
        printf("\n"); 
    }
    printf("\n");
    
    //persegi kedua
    for (int i = 1; i <= N; i++) {
    	if ( i % K == 0) {
    		for (int j = 0; j < N; j++) {
    			printf("#");
			}
		} else {
			for (int j = 0; j < N; j++) {
				printf(".");
			}
		}
		printf("\n");
		}
	printf("\n");
	
    //persegi ketiga DONE!!
    for (int i = 0; i < N; i++) { 
        for (int j = 1; j <= N; j++) {
			if (j % K == 0) {
			printf("#"); 
		} else {
        	printf(".");
		}
        }
        printf("\n"); 
    }
    
    return 0;
}
