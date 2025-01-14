#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++) {
        printf("Case #%d: ", i);

        int n, dicari;
        scanf("%d %d", &n, &dicari);

        int first = 1;
        int last = n;

        if (last % 2 == 0) last++;
        if (dicari % 2 == 0) dicari++;

        int ans1 = (dicari - 1) / 2;
        int ans2 = (last - dicari) / 2;

        // Menentukan nilai minimum tanpa fungsi min
        int result = (ans1 < ans2) ? ans1 : ans2;
        
        printf("%d\n", result);
    }
    
    return 0;
}

