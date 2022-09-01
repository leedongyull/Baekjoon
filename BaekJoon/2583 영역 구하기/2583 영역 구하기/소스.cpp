#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
bool visited[101][101] = { false, };
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int xlim, ylim, t;

void check(int x1, int x2, int y1, int y2) {
	for (int j = x1; j < x2; j++) {
		for (int k = y1; k < y2; k++) {
			visited[k][j] = true;
		}
	}
}

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[y][x] = true;
	int cnt = 1;
	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x < xlim && next_y < ylim && next_x >= 0 && next_y >= 0) {
				if (!visited[next_y][next_x]) {
					q.push(make_pair(next_x, next_y));
					visited[next_y][next_x]=true;
					cnt++;
				}
			}
		}
	}
	v.push_back(cnt);
};

int main() {
	int area = 0;
	cin >> ylim >> xlim >> t;
	for (int i = 1; i <= t; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		check(x1, x2, y1, y2);
	}
	for (int i = 0; i < ylim; i++) {
		for (int j = 0; j < xlim; j++) {
			if (visited[i][j] == false) {
				bfs(j, i);
				area++;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << area << "\n";

	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<" ";
	}
}