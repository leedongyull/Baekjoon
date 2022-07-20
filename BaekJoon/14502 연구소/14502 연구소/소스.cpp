#include <stdio.h>
#include <queue>
#include <tuple>
#include <cstring>

using namespace std;

int xside, yside;
int map[9][9] = { 0, };
int tempmap[9][9] = { 0, };
int dirx[4] = { 1,0,0,-1 };
int diry[4] = { 0,1,-1,0 };
int res=0;
int max(int a, int b) { return a > b ? a : b; }

void copymap(int (*a)[9], int (*b)[9]) {
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			a[i][j] = b[i][j];
		}
	}
}

void bfs() {
	int spreadmap[9][9];
	copymap(spreadmap,tempmap);
	queue<pair<int, int>>q;
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			if (spreadmap[i][j] == 2) q.push({ j,i });
		}
	}
	while (!q.empty()) {
		int dx = q.front().first;
		int dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dx + dirx[i];
			int next_y = dy + diry[i];
			if (next_x > xside || next_y > yside || next_x < 1 || next_y < 1) continue;
			if (spreadmap[next_y][next_x] == 0) {
				spreadmap[next_y][next_x] = 2;
				q.push({ next_x, next_y });
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			if (spreadmap[i][j] == 0) cnt++;
		}
	}
	res = max(res, cnt);
}

void make_wall(int cnt) {
	if (cnt == 3) {
		bfs();
		return;
	}
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			if (tempmap[i][j] == 0) {
				tempmap[i][j] = 1;
				make_wall(cnt + 1);
				tempmap[i][j] = 0;
			}
		}
	}
}

int main(void) {
	scanf("%d%d", &yside, &xside);
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			if (map[i][j] == 0) {
				copymap(tempmap, map);
				tempmap[i][j] = 1;
				make_wall(1);
				tempmap[i][j] = 0;
			}
		}
	}
	printf("%d", res);

}