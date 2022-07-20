#include <iostream>
#include <queue>

using namespace std;
int xside = 0, yside = 0;
int sheepcnt = 0, wolfcnt = 0;
char field[251][251] = { 0 };
bool visited[251][251] = { false, };
int dirx[4] = { -1,0,0,1 };
int diry[4] = { 0,1,-1,0 };
int res[2] = { 0, };

bool isPossible(int x, int y) {
	if (x > xside || y > yside || x < 1 || y < 1) return false;
	return true;
}

void bfs(int x, int y) {
	queue<pair<int, int>>q;
	q.push({ x,y });
	visited[y][x] = true;
	if (field[y][x] == 'o') sheepcnt++;
	if (field[y][x] == 'v') wolfcnt++;
	while (!q.empty()) {
		int dx = q.front().first;
		int dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dx + dirx[i];
			int next_y = dy + diry[i];
			if (field[next_y][next_x] == '#') continue;
			if (isPossible(next_x, next_y) == true && visited[next_y][next_x] == false) {
				q.push({ next_x,next_y });
				visited[next_y][next_x] = true;
				if (field[next_y][next_x] == 'o') sheepcnt++;
				if (field[next_y][next_x] == 'v') wolfcnt++;
			}
		}
	}
}

int main(void) {
	cin >> yside >> xside;
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			cin >> field[i][j];
		}
	}
	
	for (int i = 1; i <= yside; i++) {
		for (int j = 1; j <= xside; j++) {
			if (field[i][j] !='#' && visited[i][j] == false) bfs(j, i);
			if (sheepcnt > wolfcnt) {
				wolfcnt = 0;
				res[0] += sheepcnt;
			}
			else {
				sheepcnt = 0;
				res[1] += wolfcnt;
			}
			sheepcnt = wolfcnt = 0;
		}
	}
	cout << res[0] << ' ' << res[1];
}