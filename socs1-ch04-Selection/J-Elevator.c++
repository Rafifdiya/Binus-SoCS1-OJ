#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);

    int t = (k - x);

    if (t >= 0 && (y - t) == k) {
        printf("%d\n", t);
    } else {
        printf("-1\n");
    }

    return 0;
}