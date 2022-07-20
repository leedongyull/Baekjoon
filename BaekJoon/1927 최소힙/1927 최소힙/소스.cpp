#include <stdio.h>

using namespace std;

int heaparr[300001] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

void swap(int *a, int *b) {;
	int temp = *a;
	*a = *b;
	*b = temp;

}

void heap(int i) {
	if (i == 1) return;
	if (heaparr[i] < heaparr[i / 2]) {
		swap(&heaparr[i], &heaparr[i / 2]);
		heap(i / 2);
	}
	else return;
}

void del(int i) {
	int k = 1;
	printf("%d\n",heaparr[1]);
	heaparr[1] = heaparr[i-1];
	heaparr[i-1] = 0;
	while (1) {
		if (k >= i-2) break;
		if (heaparr[k * 2 + 1] == 0) {
			if (heaparr[k * 2] == 0) break;
			if (heaparr[k] > heaparr[k * 2]) {
				swap(&heaparr[k], &heaparr[k * 2]);
				k *= 2 + 1;
			}
			else break;
		}
		else if (heaparr[k] > heaparr[k * 2] || heaparr[k] > heaparr[k * 2 + 1]) {
			if (heaparr[k*2] < heaparr[k * 2+1]) {
				swap(&heaparr[k], &heaparr[k * 2]);
				k *= 2;
			}
			else {
				swap(&heaparr[k], &heaparr[k * 2 + 1]);
				k = k * 2 + 1;
			}
		}
		else break;
	}

}

int main(void) {
	int t, s = 1;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		if (n == 0) {
			del(s);
			if (s == 1) continue;
			s--;
		}
		else {
			heaparr[s] = n;
			heap(s);
			s++;
		}
	}
}