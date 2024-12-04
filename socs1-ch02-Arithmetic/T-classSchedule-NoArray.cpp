#include <stdio.h>

int main() {
    char a[11], b[11], c[11], d[11], e[11];
    int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4, e1, e2, e3, e4;

    //Tanpa array atau pake for, cukup ribet sih emang
    //Makanya pake array & for loop :D
    scanf("%s %d:%d-%d:%d", a, &a1, &a2, &a3, &a4);
    scanf("%s %d:%d-%d:%d", b, &b1, &b2, &b3, &b4);
    scanf("%s %d:%d-%d:%d", c, &c1, &c2, &c3, &c4);
    scanf("%s %d:%d-%d:%d", d, &d1, &d2, &d3, &d4);
    scanf("%s %d:%d-%d:%d", e, &e1, &e2, &e3, &e4);

    a1 -= 1; a3 -= 1;
    b1 -= 1; b3 -= 1;
    c1 -= 1; c3 -= 1;
    d1 -= 1; d3 -= 1;
    e1 -= 1; e3 -= 1;

    printf("%s %02d:%02d-%02d:%02d\n", a, a1, a2, a3, a4);
    printf("%s %02d:%02d-%02d:%02d\n", b, b1, b2, b3, b4);
    printf("%s %02d:%02d-%02d:%02d\n", c, c1, c2, c3, c4);
    printf("%s %02d:%02d-%02d:%02d\n", d, d1, d2, d3, d4);
    printf("%s %02d:%02d-%02d:%02d\n", e, e1, e2, e3, e4);

    return 0;
}

