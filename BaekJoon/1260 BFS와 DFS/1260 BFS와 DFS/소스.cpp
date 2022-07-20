#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

bool checkd[1001] = { false, };
bool checkb[1001] = { false, };

using namespace std;

void dfs(int s, vector<int> arr[]) {
	if (checkd[s] == true) return;
	checkd[s] = true;
	cout << s << ' ';
	for (int i = 0; i < arr[s].size(); i++) {
		int x = arr[s][i];
		dfs(x,arr);
	}
}

void bfs(int s, vector<int> arr[]) {
	queue<int> q;
	q.push(s);
	checkb[s] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < arr[x].size(); i++) {
			int y = arr[x][i];
			if (checkb[y] == false) {
				q.push(y);
				checkb[y] = true;
			}
		}
	}
}


int main(void) {

	int n, m, v;
	cin >> n >> m >> v;

	vector<int> *arr= new vector<int>[n + 1];

	
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 0; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end());
	}
	dfs(v,arr);
	cout << '\n';
	bfs(v, arr);

}