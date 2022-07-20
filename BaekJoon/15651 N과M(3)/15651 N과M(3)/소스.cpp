#include<iostream>

using namespace std;
int arr[10] = { 0, };

void sequence(int n, int m, int cnt) {
	if (m == cnt) {
		for (int i = 0; i < cnt; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		arr[cnt] = i;
		sequence(n, m, cnt + 1);
	}

}

int main(void) {
	int n, m;
	cin >> n >> m;
	sequence(n, m, 0);
}