#include <stdio.h>

int main() {
	int pi[1001] = {0, };
	int n, sum = 0, best = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &pi[i]);
		if(i > 0) {
			if(pi[i-1] < pi[i])
				sum += pi[i] - pi[i-1];
			else sum = 0;
			if(best<sum) {
				best = sum;
			}
		}
	}
	printf("%d", best);
}
