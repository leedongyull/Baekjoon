#include <stdio.h>
int a, b;
int arr[51] = { 0, };

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	if (n <= 2) {
		if (n == 1) {
			printf("A");
			return 0;
		}
		else {
			if (arr[2] == arr[1]) printf("%d", arr[1]);
			else printf("A");
			return 0;
		}
	}
	if ((arr[2] - arr[1]) == 0) a = 1;
	else a = (arr[3]-arr[2]) / (arr[2]-arr[1]);
	b = arr[2] - arr[1] * a;

	for (int i = 1; i < n; i++) {
		if (arr[i] * a + b != arr[i + 1]) {
			printf("B");
			return 0;
		}
	}
	printf("%d", arr[n] * a + b);
}
