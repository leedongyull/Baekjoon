#include <stdio.h>

int pascal[31][31] = { 0, };

int comb(int x, int y) {
	if (x == y || y == 0) return 1;
	if (pascal[x][y] != 0) return pascal[x][y];
	pascal[x][y] = comb(x - 1, y) + comb(x-1, y - 1);
	return pascal[x][y];
}

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, m;
		scanf("%d %d", &n, &m);
		printf("%d\n",comb(m, n));
	}
}