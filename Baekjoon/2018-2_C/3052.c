#include <stdio.h>

int main() {
	int arr[42] = {0, }, n, r = 0, i;
	for(i = 0; i < 10; i++) {
		scanf("%d", &n);
		arr[n%42]++;
	}
	for(i = 0; i < 42; i++) {
		if(arr[i] != 0)
			r++;
	}
	printf("%d", r);
}