#include <stdio.h>
#include <queue>

using namespace std;

int maze[101][101] = { 0, };
int cnt[101][101] = { 0, };
bool visited[101][101] = { false, };
int dirx[4] = { 1,0,0,-1 };
int diry[4] = { 0,1,-1,0 };
int dx = 0, dy = 0;
int xside;
int yside;

void bfs(int x, int y) {
	queue<pair<int,int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;
	cnt[x][y] = 1;
	while (!q.empty()) {
		dx = q.front().first;
		dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dirx[i] + dx;
			int next_y = diry[i] + dy;
			if (next_x > xside || next_y > yside || next_x < 1 || next_y < 1) continue;
			if (maze[next_x][next_y] == 1 && visited[next_x][next_y] == false) {
				visited[next_x][next_y]=true;
				cnt[next_x][next_y] = cnt[dx][dy] + 1;
				q.push(make_pair(next_x, next_y));
			}
		}
	}
	printf("%d", cnt[xside][yside]);
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	xside = n;
	yside = m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d",&maze[i][j]);
		}
	}
	bfs(1,1);
}