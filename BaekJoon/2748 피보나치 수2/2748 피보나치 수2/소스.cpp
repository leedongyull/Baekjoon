#include <stdio.h>


long long fibonacci[91] = { 0, };

long long dp(long long num) {
	if (num <= 2) {
		if (num == 0) return 0;
		else return 1;
	}
	if (fibonacci[num] != 0) return fibonacci[num];
	return fibonacci[num] = dp(num - 1) + dp(num - 2);
}

int main(void) {
	long long n;
	scanf("%lld",&n);
	printf("%lld", dp(n));
}