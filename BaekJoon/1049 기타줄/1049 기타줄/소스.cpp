#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}
int main(void) {
	int package[50] = { 0, }, piece[50] = { 0, };
	int cut, t,res=0;
	scanf("%d%d",&cut, &t);
	for (int i=0; i < t; i++) {
		scanf("%d %d", &package[i], &piece[i]);
	}
	qsort(package, t, sizeof(int), compare);
	qsort(piece, t, sizeof(int), compare);
	if (cut < 6) {
		if (piece[0] * cut < package[0]) {
			res += piece[0] * cut;
		}
		else res += package[0];
	}
	else {
		if (piece[0] * 6 < package[0]) {
			res += piece[0] * cut;
		}
		else {
			res += package[0] * (cut / 6);
			if (piece[0] * (cut%6) < package[0]) {
				res += piece[0] * (cut%6);
			}
			else res += package[0];
		}
	}

	printf("%d", res);
}