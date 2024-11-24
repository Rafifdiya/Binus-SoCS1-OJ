#include<stdio.h>
int main(){
    int i;
    for(i = 1; i < 5; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        getchar();
        int mult = x * y;
        printf("%d\n", mult);
    }

    return 0;
}