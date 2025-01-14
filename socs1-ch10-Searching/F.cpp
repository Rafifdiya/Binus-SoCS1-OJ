#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    
    int Easy = 1;  
    
    for (int i = 0; i < N; i++) {
        int opinion;
        scanf("%d", &opinion); 
        
        if (opinion == 1) {  
            Easy = 0;
        }
    }
    
    if (Easy) {
        printf("easy\n");
    } else {
        printf("not easy\n");
    }
    
    return 0;
}

