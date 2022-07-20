#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

char picture[101][101] = { 0 };
bool visited[101][101] = { 0, };
int dirx[4] = { -1,0,0,1 };
int diry[4] = { 0,1,-1,0 };
int squre = 0;

void bfs(int x, int y) {
	queue<pair<int,int>>q;
	q.push({ x,y });
	visited[x][y] = true;
	while (!q.empty()) {
		int dx = q.front().first;
		int dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dx + dirx[i];
			int next_y = dy + diry[i];
			if (visited[next_x][next_y] == true) continue;
			if (next_x < 1 || next_y<1 || next_x>squre || next_y>squre) continue;
			if (picture[next_x][next_y] == picture[x][y]) {
				q.push({ next_x,next_y });
				visited[next_x][next_y] = true;
			}
		}
	}

}


int main(void) {
	int cnt1 = 0;
	int cnt2 = 0;
	cin >> squre;
	for (int i = 1; i <= squre; i++) {
		for (int j = 1; j <= squre; j++) {
			cin >> picture[i][j];
		}
	}
	for (int i = 1; i <= squre; i++) {
		for (int j = 1; j <= squre; j++) {
			if (visited[i][j] == false) {
				bfs(i, j);
				cnt1++;
			}
		}
	}
	memset(visited, false, sizeof(visited));
	for (int i = 1; i <= squre; i++) {
		for (int j = 1; j <= squre; j++) {
			if (picture[i][j] == 'G') picture[i][j] = 'R';
		}
	}

	for (int i = 1; i <= squre; i++) {
		for (int j = 1; j <= squre; j++) {
			if (visited[i][j] == false) {
				bfs(i, j);
				cnt2++;
			}
		}
	}

	cout << cnt1 << ' ' << cnt2;
}