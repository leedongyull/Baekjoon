#include <iostream>

using namespace std;

int com[1001][1001] = { 0, };

int comb(int n, int k) {
	if (com[n][k] != 0) return com[n][k];
	if (k == 0 || n==k ) return com[n][k]=1;
	comb(n - 1, k - 1);
	comb(n - 1, k);
	com[n][k] = (com[n - 1][k - 1] + com[n - 1][k])%10007;
	return 0;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	comb(n,k);
	cout << com[n][k]%10007;
}