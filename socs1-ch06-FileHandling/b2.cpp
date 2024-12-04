#include <stdio.h>
#include <string.h>

FILE *fptr;

int main() {
    fptr = fopen("testdata.in", "r");
    char s[1001];
    int t;

    fscanf(fptr, "%d", &t);

    int k;
    for (int i = 0; i < t; i++) {
        fscanf(fptr, "%d\n", &k);
        fgets(s, 1001, fptr);
        s[strcspn(s, "\n")] = '\0';

        for (int j = 0; s[j] != '\0'; j++) {
            if (s[j] >= '0' && s[j] <= '9') {
                switch (s[j]) {
                    case '0': s[j] = 'O'; break;
                    case '1': s[j] = 'I'; break;
                    case '3': s[j] = 'E'; break;
                    case '4': s[j] = 'A'; break;
                    case '5': s[j] = 'S'; break;
                    case '6': s[j] = 'G'; break;
                    case '7': s[j] = 'T'; break;
                    case '8': s[j] = 'B'; break;
                }
            } else if (s[j] >= 'A' && s[j] <= 'Z') {
                s[j] = ((s[j] - 'A' - k + 26) % 26) + 'A';
            } else if (s[j] >= 'a' && s[j] <= 'z') {
                s[j] = ((s[j] - 'a' - k + 26) % 26) + 'a';
            }
        }

        printf("Case #%d: %s\n", i + 1, s);
    }

    fclose(fptr);
    return 0;
}

