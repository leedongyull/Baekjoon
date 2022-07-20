#include <stdio.h>
#include <queue>


using namespace std;

int tomato[1001][1001] = { 0, };
int check[1001][1001] = { 0, };
bool visited[1001][1001] = { false, };
int dirx[4] = { -1,0,0,1 };
int diry[4] = { 0,1,-1,0 };
int res = 0;
int xside = 0;
int yside = 0;

int max(int a, int b) { return a > b ? a : b; }

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;
	check[x][y] = 1;
	while (!q.empty()) {
		int dx = q.front().first;
		int dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dx + dirx[i];
			int next_y = dy + diry[i];
			if (next_x<1 || next_y<1 || next_x>xside || next_y>yside) continue;
			if (visited[next_x][next_y] == false && tomato[next_x][next_y] == 0) {
				visited[next_x][next_y] = true;
				check[next_x][next_y] = check[dx][dy] + 1;
				q.push(make_pair(next_x, next_y));
				res = max(res, check[next_x][next_y]);
			}
		}
	}
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			if (check[i][j] == 0) {
				printf("-1");
				exit(0);
			}
		}
	}
	printf("%d", res);
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	xside = n;
	yside = m;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &tomato[i][j]);
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (tomato[i][j] == 1) bfs(i, j);
		}
	}

}