#include <stdio.h>

int main () {
	int num[10];
	int a, b, c, i, result;	

	for (i = 0; i < 10; i++)
		num[i] = 0;

	scanf("%d%d%d", &a, &b, &c);
	result = a * b * c;

	while (result != 0) {
		num[result % 10]++;
		result /= 10;
	}

	for (i = 0; i < 10; i++)
		printf("%d\n", num[i]);

	return 0;
}