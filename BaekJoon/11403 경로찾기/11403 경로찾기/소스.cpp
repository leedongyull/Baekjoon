#include <iostream>
#include <queue>
#include<vector>

using namespace std;

int graph[101][101] = { 0, };
bool visited[101] = { false, };
int n;

void dfs(int k) {
	for (int i = 1; i <= n; i++) {
		if (graph[k][i] == 1 && visited[i] == false) {
			visited[i] = true;
			dfs(i);
		}
	}
}

int main(void) {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> graph[i][j];
		}
	}

	dfs();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (visited[i][j] == true) {
				cout << "1 ";
			}
			else cout << "0 ";
		}
		cout << '\n';
	}


}