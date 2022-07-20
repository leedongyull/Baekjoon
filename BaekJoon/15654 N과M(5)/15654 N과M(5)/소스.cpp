#include <iostream>
#include <algorithm>

int arr[10] = { 0, };
bool check[10] = { false, };
int res[10] = { 0, };
int s = 1;

using namespace std;


void sequence(int n, int m, int cnt) {
	if (cnt == m + 1) {
		for (int i = 1; i < cnt; i++) {
			cout << res[i]<<' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == true) continue;
		check[i] = true;
		res[s] = arr[i];
		s++;
		sequence(n, m, cnt + 1);
		s--;
		check[i] = false;

	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	sort(arr+1, arr + n+1);
	sequence(n, m, 1);
}