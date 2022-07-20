#include <stdlib.h>
#include<iostream>

using namespace std;

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) return -1;
	if (num1 > num2)return 1;
	return 0;
}

int main(void) {
	int n, sum = 0;
	int num[1000] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	qsort(num, n, sizeof(int), compare);

	for (int i = 0; i <n; i++) {
		if (i == 0) sum += num[i];
		else {
			for (int j = 0; j <= i; j++) {
				sum += num[j];
			}
		}
	}
	cout << sum;

}