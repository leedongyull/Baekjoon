#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

int house[26][26] = { 0, };
bool visited[26][26] = { false, };
int dx = 0;
int dy = 0;
int dirx[4] = { 1,0,0,-1 };
int diry[4] = { 0,1,-1,0 };
int xside;
int yside;
int cnt = 0;
int cnt2 = 0;

using namespace std;

void dfs(int x, int y) {
	if (visited[x][y] == true) return;
	visited[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; i++) {
		dx = x + dirx[i];
		dy = y + diry[i];
		if (dx<1 || dy<1 || dx>xside || dy>yside) continue;
		if (visited[dx][dy] == false && house[dx][dy]==1) {
			dfs(dx, dy);
		}
	}
}


int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n;
	int arr[1000] = { 0, };
	int s = 0;
	cin >> n;
	xside = n;
	yside = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%1d",&house[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (visited[i][j] == false&&house[i][j]==1) {
				dfs(i, j);
				arr[s] = cnt;
				s++;
				cnt = 0;
				cnt2++;
			}
		}
	}

	sort(arr, arr+s);

	printf("%d\n", cnt2);

	for (int i = 0; i < s; i++) {
		printf("%d\n", arr[i]);
	}
	
}