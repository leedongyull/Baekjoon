#include <iostream>

using namespace std;
int ari(int a[], int b);
int geo(int a[],int b);

int main(void) {
	int n,k=0;
	int num[50];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	if (num[k + 1] - num[k] == num[k + 2] - num[k + 1]) {
		cout << ari(num, n);
	}
	else cout << geo(num,n);
}

int ari(int a[], int b) {
	int res = 0;
	res = a[b - 1] + (a[b - 2] - a[b - 3]);
	return res;
}

int geo(int a[],int b) {
	int res = 1;
	res =a[b-1]* (a[b - 2] / a[b - 3]);
	return res;
}