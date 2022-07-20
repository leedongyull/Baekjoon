#include <stdio.h>

		
bool arr[246913] = { false, };

int main(void) {
	int n;
	while (1) {
		int cnt = 0;
		scanf("%d", &n);
		if (n == 0) break;
		if (n == 1) {
			printf("1\n");
			continue;
		}

		for (int i = 2; i <= 2*n; i++) {
			arr[i] = true;
		}

		for (int i = 2; i * i <= 2 * n; i++) {
			for (int j = i * i; j <= 2 * n; j += i) {
				if (arr[i] == true) {
					arr[j] = false;
				}
			}
		}

		for (int i = n+1; i <= 2*n; i++) {
			if (arr[i] == true) cnt++;
		}
		printf("%d\n", cnt);
	}
}