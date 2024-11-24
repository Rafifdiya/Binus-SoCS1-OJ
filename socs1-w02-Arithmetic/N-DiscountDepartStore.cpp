#include<stdio.h>
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%.2lf%%\n", ((double)A - (double)B) / (double)A * 100);

    return 0;
}