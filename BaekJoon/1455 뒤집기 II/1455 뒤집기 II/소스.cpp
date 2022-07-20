#include <stdio.h>
using namespace std;

int coin[101][101] = { 0, };

void reverse(int x, int y) {
	for (int i = 1; i <= y; i++) {
		for (int j = 1; j <= x; j++) {
			if (coin[i][j] == 1) coin[i][j] = 0;
			else coin[i][j] = 1;
		}
	}
}

int main(void) {
	int yside, xside;
	int cnt = 0;
	scanf("%d%d", &yside, &xside);
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			scanf("%1d",&coin[i][j]);
		}
	}
	for (int i = yside; i >= 1; i--) {
		for (int j = xside; j >= 1; j--) {
			if (coin[i][j] == 1) {
				reverse(j, i);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}