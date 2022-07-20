#include <iostream>

using namespace std;
int arr[10] = { 0, };

void sequence(int n, int m, int cnt,int cur) {
	if (cnt == m+1) {
		for (int i = 1; i < cnt; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = cur; i <= n; i++) {
		arr[cnt] = i;
		sequence(n, m, cnt + 1,arr[cnt]);
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	sequence(n, m, 1,1);
}