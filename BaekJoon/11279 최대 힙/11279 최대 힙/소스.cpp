#include <stdio.h>
#include <cstring>
using namespace std;

int heap[1000000] = { 0, };

int max(int a, int b) { return a > b ? a : b; }

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void maxheap(int i) {
	if (i == 1) return;
	if (heap[i] > heap[i / 2]) {
		swap(&heap[i], &heap[i / 2]);
		maxheap(i / 2);
	}
	else return;
}
void del(int i) {
	int k = 1;
	if (i == 1) {
		printf("0\n");
		return;
	}
	printf("%d\n",heap[1]);
	heap[k] = heap[i - 1];
	heap[i - 1] = 0;
	while (1) {
		if (heap[k] < heap[k * 2] || heap[k] < heap[k * 2 + 1]) {
			if (heap[k * 2] > heap[k * 2 + 1]) {
				swap(&heap[k], &heap[k * 2]);
				k = k * 2;
			}
			else {
				swap(&heap[k], &heap[k * 2 + 1]);
				k = k * 2 + 1;
			}
			
		}
		else break;
	}
}




int main(void) {
	int t, s = 1;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int num;
		scanf("%d",&num);
		if (num != 0) {
			heap[s++] = num;
			maxheap(s-1);
		}
		if (num == 0) {
			if (s == 0) printf("0\n");
			else {
				del(s);
				if (s == 1) continue;
				s--;
			}
		}
	}
}