#include <stdio.h>

	bool arr[1000001] = { false };

int main(void) {
	long long min, max, count = 0;
	scanf("%lld %lld", &min, &max);
	for (long long i = 2; i <= max; i++) {
		arr[i] = true;
	}

	for (long long i = 2; i*i <= max; i++) {
		if (arr[i] == true) {
			for (int j = i * i; j <= max; j += i) {
				arr[j] = false;
			}
		}
	}

	for (long long i = min; i <= max; i++) {
		if (arr[i] == true) printf("%lld\n",i);
	}

}