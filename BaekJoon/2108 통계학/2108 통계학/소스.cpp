#include <stdio.h>
#include <algorithm>
#include <cmath>

using namespace std;

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a < *(int*)b) return -1;
	else return 0;
}
	int check[9001] = { 0, };
	int num[500001] = { 0, };
	int cnt[9001] = { 0, };

int main(void) {
	int max = -4001, min = 4001;
	double sum=0;
	int cntmax = 0;
	bool many = false;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		if (num[i] >= max) max = num[i];
		if (num[i] <= min) min = num[i];
		sum += num[i];
		cnt[num[i] + 4000]++;
	}
	for (int i = 0; i <= 8001; i++) {
		if (cntmax <= cnt[i]) {
			cntmax = cnt[i];
		}
	}
	int s = 0;
	for (int i = 0; i <= 8001; i++) {
		if (cntmax == cnt[i]) {
			if (s == 1) many = true;
			check[s] = i-4000;
			s++;
		}
	}
	double result = round((double)sum / n);
	qsort(num+1,n,sizeof(int),compare);
	qsort(check, s-1, sizeof(int), compare);
	printf("%d\n", (int)result);
	printf("%d\n", num[n / 2+1]);
	if (many == true)	printf("%d\n", check[1]);
	else  printf("%d\n", check[0]);
	printf("%d\n", max - min);
}