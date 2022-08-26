#include <iostream>
#include <algorithm>

using namespace std;

int arr[10] = { 0, };
int stack[10] = { 0, };

void comb(int n,int m, int cnt,int start) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << stack[i]<<" ";
		}
		cout << '\n';
		return;
	}
	for (int i = start; i < n; i++) { //start가 핵심 start를 이용해서 앞에 뽑았었던건 제외
		stack[cnt] = arr[i];
		comb(n, m, cnt + 1,i);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	comb(n,m, 0,0);
}