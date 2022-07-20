#include<stdio.h>

long long pinary[91] = { 0, };

long long dp(long long num) {
	if (num <= 2) return 1;
	else if (pinary[num] != 0) return pinary[num];
	return pinary[num] = dp(num - 1) + dp(num - 2);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%lld", dp(n));
}