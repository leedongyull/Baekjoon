#include <iostream>
#include <algorithm>

using namespace std;

bool visited[10] = { false, };
int arr[10] = { 0, };
int out[10] = { 0, };

void comb(int n,int m, int cnt) {
	if (m+1 == cnt) {
		for (int i = 1; i <= m; i++)
			cout << out[i] << " ";
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (visited[i] == true||arr[i]<out[cnt-1]) continue;
		else {
			visited[i] = true;
			out[cnt] = arr[i];
			comb(n,m,cnt + 1);
			visited[i] = false;
		}
	}

}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n+1);
	comb(n,m,1);
}