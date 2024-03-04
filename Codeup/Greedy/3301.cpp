// 3301. 거스름돈

#include <stdio.h>

int main() {
    int a = 0;
    int count = 0;
    int bill[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
    
    scanf("%d", &a);
    
    for(int i=0; i<8; i++) {
        while(a >= bill[i]) {
            a -= bill[i];
            count++;
        }
    }
    
    printf("%d", count);
    
}