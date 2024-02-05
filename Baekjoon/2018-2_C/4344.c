#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)	{
		int n2;
		float aver = 0;
		float arr[1001];
		scanf("%d", &n2);
		for(int j = 0; j < n2; j++) {
			scanf("%f", &arr[j]);
			aver += arr[j];
		}
		aver /= n2;
		float cnt = 0;
        for (int j = 0; j < n2; j++)
            if (arr[j] > aver) cnt++;
		printf("%.3f%%\n", cnt / n2 * 100);
	}
}