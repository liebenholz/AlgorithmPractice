// 2001. 최소 대금

#include <stdio.h>

int main() {
    int pasta[3];
    int juice[2];
    int min_p = 2000;
    int min_j = 2000;

    for(int i=0; i<3; i++) {
        scanf("%d", &pasta[i]);
        if(min_p > pasta[i]) {
            min_p = pasta[i];
        }
    }

    for(int i=0; i<2; i++) {
        scanf("%d", &juice[i]);
        if(min_j > juice[i]) {
            min_j = juice[i];
        }
    }

    printf("%.1f", (min_p + min_j) * 1.1);
}