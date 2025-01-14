#include<stdio.h>
int main() {
    char A,B;
    int total;
    int asc1,asc2;
    
    scanf("%c %c",&A,&B);
    asc1= (int)A; asc2= (int)B;
    total = asc1 * asc2;
    printf("%d\n",total);

    return 0;
}


