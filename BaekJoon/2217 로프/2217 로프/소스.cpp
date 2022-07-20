#include <iostream>
#include <algorithm>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n,res=0;
	int a[100001] = { 0, };
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	sort(a, a + n+1);
	int k = 1;

	for(int i = n; i >= 1; i--) {
		res = max(a[i] * k, res);
		k++;
	}

	cout << res;
}