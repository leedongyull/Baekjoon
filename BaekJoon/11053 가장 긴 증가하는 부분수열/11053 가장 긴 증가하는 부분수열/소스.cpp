#include<stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n, count = 0;
	int num[1001] = { 0, };
	int len[1001] = { 0, };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 1; i <= n; i++) {
		len[i] = 1;
		for (int j = 0; j < i; j++) {
			if (num[i] > num[j]&&len[i]<len[j]+1) { // �ڽź��� ���� �� ��, ���� �� �κм����� + 1 �ϴ°���
				len[i] = len[j] + 1;
			}
		}
		count = max(count, len[i]);
	}
	printf("%d", count);
}