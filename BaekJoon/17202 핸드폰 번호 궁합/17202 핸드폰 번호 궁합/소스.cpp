#include <stdio.h>

int a[9] = { 0, };
int b[9] = { 0, };

int com[20][20] = { 0, };

int main() {
	for (int i = 1; i <= 8; i++) {
		scanf("%1d", &a[i]);
	}
	for (int j = 1; j <= 8; j++) {
		scanf("%1d", &b[j]);
	}
	int cnt = 1;
	for (int i = 1; i <= 16; i++) {
		if (i % 2 == 1) com[1][i] = a[cnt];
		else {
			com[1][i] = b[cnt];
			cnt++;
		}
	}
	cnt = 15;
	for (int i = 2; i <= 15; i++) {
		for (int j = 1; j <= cnt; j++) {
			com[i][j] = com[i-1][j] + com[i-1][j + 1];
			if (com[i][j] >= 10) com[i][j] -= 10;
		}
		cnt--;
	}
	printf("%d%d", com[15][1], com[15][2]);
}