#include <iostream>
#include <queue>

using namespace std;

int arr[101][101] = { 0, };
bool visited[101] = {false, };
int res=0;
int num = 0;

void dfs(int now, int end, int cnt) {
	visited[now] = true;
	if (now == end) {
		res = cnt;
	}
	for (int i = 1; i <= num; i++) {
		if (visited[i] != true && arr[now][i] == 1) {
			dfs(i, end, cnt + 1);
		}
	}
}

int main() {
	int n;
	cin >> n;
	int resx, resy;
	cin >> resx >> resy;
	int t;
	cin >> t;
	num = n;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(resx, resy, 0);
	if (res != 0) cout << res;
	else cout << "-1";
}