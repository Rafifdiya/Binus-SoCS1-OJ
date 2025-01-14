#include <stdio.h>
#include <string.h>

FILE *fptr;

int main() {
    fptr = fopen("testdata.in", "r");
    int n, t;
    char m[101][41], p[101][101], s[41];

    fscanf(fptr, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(fptr, "%[^#]#%[^\n]\n", m[i], p[i]);
    }

    fscanf(fptr, "%d\n", &t);
    for (int i = 0; i < t; i++) {
        fscanf(fptr, "%s", s);
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(s, m[j]) == 0) {
                printf("Case #%d: %s\n", i + 1, p[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Case #%d: N/A\n", i + 1);
        }
    }

    fclose(fptr);
    return 0;
}

