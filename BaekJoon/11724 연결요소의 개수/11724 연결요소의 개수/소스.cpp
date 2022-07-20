#include <iostream>
#include <vector>

using namespace std;

bool check[1001] = { false, };

void dfs(vector<int> *arr,int x) {
	if (check[x] == true) return;
	check[x] = true;
	for (int i = 0; i < arr[x].size(); i++) {
		int y = arr[x][i];
		if (check[y] == false) {
			dfs(arr, y);
		}
	}
}

int main(void) {
	int n, m,cnt=0;
	cin >> n >> m;
	vector<int> *arr = new vector<int>[n + 1];
	;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			dfs(arr, i);
			cnt++;
		}
	}
	cout << cnt;
}