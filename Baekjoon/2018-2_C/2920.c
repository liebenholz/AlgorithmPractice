#include <stdio.h>

int main () {
	int n[8];
	int i;
	int asc = 0, des = 0;
	
	for (i = 0; i < 8; i++)
		scanf("%d", &n[i]);

	for (i = 0; i < 8; i++) {
		if (i+1 == n[i]) asc++;
		else if (8-i == n[i]) des++;
	}

	if (asc == 8) printf("ascending\n");
	else if (des == 8) printf("descending\n");
	else printf("mixed\n");

	return 0;

}