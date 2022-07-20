#include <stdio.h>

using namespace std;

long long wave[100] = { 0, };


int main(void) {
	long long t;
	wave[0] = 1;
	wave[1] = 1;
	wave[2] = 1;
	scanf("%lld", &t);
	for (int i = 0; i < t; i++) {
		long long n;
		scanf("%lld", &n);
		for (int i = 3; i < n; i++) {
			wave[i] = wave[i - 2] + wave[i - 3];
		}
		printf("%lld\n", wave[n-1]);
	}
}