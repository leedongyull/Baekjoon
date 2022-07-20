#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int tomato[1001][1001] = { 0, };
int check[1001][1001] = { 0, };
bool visited[1001][1001] = { false, };
int dirx[4] = { -1,0,0,1 };
int diry[4] = { 0,1,-1,0 };
int res = 0;
int m;
int n;

int cnt = 0;
int cnt2 = 0;

int max(int a, int b) { return a > b ? a : b; }

void bfs() {
	queue<pair<int, int>> q;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (tomato[i][j] == 1) {
				q.push(make_pair(i, j));
				visited[i][j] = true;
				check[i][j] = 1;
			}
			else if (tomato[i][j] == -1) check[i][j] = -1;
		}
	}
	while (!q.empty()) {
		int dx = q.front().first;
		int dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dx + dirx[i];
			int next_y = dy + diry[i];
			if (next_x<1 || next_y<1 || next_x>n || next_y>m) continue;
			if (visited[next_x][next_y] == false && tomato[next_x][next_y] == 0) {
				visited[next_x][next_y] = true;
				check[next_x][next_y] = check[dx][dy] + 1;
				q.push(make_pair(next_x, next_y));
				res = max(res,check[next_x][next_y]);
				cnt++;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (check[i][j] == 0) {
				printf("-1");
				exit(0);
			}
			if (check[i][j] == 1) {
				cnt2++;
			}
		}
	}
	if (cnt == 0) printf("0");
	else printf("%d", res-1);
}

int main(void) {
	int cnt = 0;
	scanf("%d %d",&m,&n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &tomato[i][j]);
		}
	}
	bfs();

}