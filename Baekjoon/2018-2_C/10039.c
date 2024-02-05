#include <stdio.h>

int main() {
	int n, i, sum = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		if(n < 40) n = 40;
		sum += n;
	}
	printf("%d\n", sum / 5);
}