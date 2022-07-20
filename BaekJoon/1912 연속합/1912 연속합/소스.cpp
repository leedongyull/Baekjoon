#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n;
	int num[100000] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int res = num[0];

	for (int i = 1; i < n; i++) {
		num[i] = max(num[i], num[i] + num[i - 1]);
		if (res < num[i]) res = num[i];
	}

	printf("%d", res);
	
}