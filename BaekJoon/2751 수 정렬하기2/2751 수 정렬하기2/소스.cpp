#include <stdlib.h>
#include<stdio.h>

long long num[1000000] = { 0, };
long long n;

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	qsort(num, n, sizeof(long long), compare);
	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}
}