#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++){
        char S[101];
        scanf("%s", S);

        int len = strlen(S);
        int dotCount = 0;
        int valid = 1; 

        for (int i = 0; i < len; i++) {
            if (S[i] == '.') {
                dotCount++;
                if (i == 0 || i == len - 1 || dotCount > 5 || S[i - 1] == '.') {
                    valid = 0;
                    break;
                }
            } else if (S[i] < '0' || S[i] > '9') {
                valid = 0; 
                break;
            }
        }

        if (dotCount != 5 || !valid) {
            printf("Case #%d: NO\n", t);
        } else {
            printf("Case #%d: YES\n", t);
        }
    }

    return 0;
}

