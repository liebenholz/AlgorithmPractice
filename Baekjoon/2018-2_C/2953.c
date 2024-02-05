#include <stdio.h>

int main() {
	int a[4];
	int max = 0, temp, index, i;
	for (i = 0; i < 5; i++) {
		scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
		temp = a[0] + a[1] + a[2] + a[3];
		if(temp > max) {
			max = temp;
			index = i + 1;
		}
	}
	printf("%d %d\n", index, max);
}
