// 3120. 리모컨

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int count = 0;
    int d[3] = {1, 5, 10};
    
    scanf("%d %d", &a, &b);
    
    while(a != b) {
        if(a<b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        int idx;
        int result = a-b;
        for(int i=0; i<3; i++) {
            if(abs(a-b-d[i]) < result) {
                result = abs(a-b-d[i]);
                idx = i;
            }
        }
        a -= d[idx];
        count++;
    } 
    printf("%d", count);
}