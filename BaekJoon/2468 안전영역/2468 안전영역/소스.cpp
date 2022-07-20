#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int area[100][100];
bool visited[100][100];
int dirx[4] = { 1,0,0,-1 };
int diry[4] = { 0,1,-1,0 };
int squre = 0;

int max(int a, int b) { return a > b ? a : b; }

void bfs(int watar, int x, int y) {
	queue<pair<int,int>> q;
	q.push({ x,y });
	visited[x][y] = true;
	while (!q.empty()) {
		int dx=q.front().first;
		int dy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = dx + dirx[i];
			int next_y = dy + diry[i];
			if (next_x<0 || next_x>=squre || next_y < 0 || next_y>=squre) continue;
			if (visited[next_x][next_y] == true) continue;
			q.push({ next_x,next_y });
			visited[next_x][next_y] = true;
		}
	}


};

int main(void) {
	int cnt = 0;
	int res = 0;
	cin >> squre;
	for (int i = 0; i < squre; i++) {
		for (int j = 0; j < squre; j++) {
			cin >> area[i][j];
		}
	}
	
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j < squre; j++) {
			for (int k = 0; k < squre; k++) {
				if (i >= area[j][k]) visited[j][k] = true;
			}
		}
		for (int j = 0; j < squre; j++) {
			for (int k = 0; k < squre; k++) {
				if (visited[j][k] == false) {
					bfs(i, j, k);
					cnt++;
				}
			}
		}
		res = max(res, cnt);
		memset(visited, false, sizeof(visited));
		cnt = 0;
	}
	cout << res;


}