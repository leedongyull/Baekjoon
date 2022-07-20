#include <iostream>
#include <vector>

using namespace std;

int dirx[4] = { -1,0,0,1 };
int diry[4] = { 0,1,-1,0 };
int xside;
int yside;
int cab[51][51] = { 0, };
bool visited[51][51] = { false, };
int cnt = 0;

void dfs(int x, int y){
	if (visited[x][y] == true) return; 
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int dx = x + dirx[i];
		int dy = y + diry[i];
		if (dx<0 || dy<0 || dx>xside || dy>yside)continue;
		else {
			if (visited[dx][dy] == false && cab[dx][dy] == 1) {
				dfs(dx, dy);
			}
		}
	}
}

void clean(int cab[][51], bool visited[][51]) {
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			cab[i][j] = 0;
			visited[i][j] = false;
		}
	}
}

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n=0, m=0, k=0;
		cin >> n>> m>> k;
		xside = n;
		yside = m;
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			cab[a][b] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (cab[i][j] == 1 && visited[i][j] == false) {
					dfs(i, j);
					cnt++;
				}
			}
		}
	cout << cnt << '\n';
	cnt = 0;
	clean(cab, visited);
	}
}