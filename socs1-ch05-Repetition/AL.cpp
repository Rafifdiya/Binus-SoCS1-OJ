#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int max_weapon = 0;
    int max_attack = 0;

    for (int i = 0; i < N; i++) {
        int weapon;
        scanf("%d", &weapon);
        if (weapon > max_weapon) {
            max_weapon = weapon;
        }
    }

    for (int i = 0; i < M; i++) {
        int attack;
        scanf("%d", &attack);
        if (attack > max_attack) {
            max_attack = attack;
        }
    }

    if (max_weapon > max_attack) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}

