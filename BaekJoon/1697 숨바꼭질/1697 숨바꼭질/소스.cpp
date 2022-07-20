#include <stdio.h>
#include <queue>

using namespace std;

int cnt = 0;
int res = 0;
bool visited[100001] = { false, };

bool isPossible(int n) {
	if (n < 0 || n>100000 || visited[n] == true) return false;
	return true;
}

void bfs(int n, int m) {
	queue<pair<int, int>> q;
	q.push(make_pair(n, 0));
	visited[n] = true;
	while (!q.empty()) {
		int data = q.front().first;
		int depth = q.front().second;
		q.pop();
		if (data == m) {
			res = depth;
			break;
		}
		if (isPossible(data - 1)) {
			q.push(make_pair(data - 1, depth + 1));
			visited[data - 1] = true;
		}
		if (isPossible(data + 1)) {
			q.push(make_pair(data + 1, depth + 1));
			visited[data + 1] = true;
		}
		if (isPossible(data * 2)) {
			q.push(make_pair(data * 2, depth + 1));
			visited[data * 2] = true;
		}
		
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	bfs(n, m);
	printf("%d", res);
}