#include<stdio.h>
int main(){
    int n, q; //input 1 2
    scanf("%d", &n);

    int view[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &view[i]);
    }

    scanf("%d", &q);
    int hasil[q];
    for (int i = 0; i < q; i++) {
        int a1, b2; 
        scanf("%d %d", &a1, &b2);

        int nyimpen = 0;
        a1--;
        b2--;
        for (int j = a1; j <= b2; j++) {
            nyimpen = nyimpen + view[j];
        }
            hasil[i] = nyimpen;
    }

    for (int i = 0; i < q; i++) {
        printf("Case #%d: %d\n", i+1, hasil[i]);
    }
    


    return 0;
}