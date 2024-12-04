#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%.2lf%%\n", (double)x / (double)y * 100);

    return 0;
}