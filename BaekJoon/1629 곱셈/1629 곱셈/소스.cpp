#include <stdio.h>

int main(void) {
	long long a, b, c;
	scanf("%lld%lld%lld",&a, &b, &c);
	int cnt = 0;
	long long res = a;
	while (cnt != b) {
		res *= a;
		cnt++;
	}
	printf("%d", res % c);
}