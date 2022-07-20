#include <iostream>
#include <queue>
#include <tuple>
#include<cstring>

using namespace std;

int dirx[8] = { 1,2,-2,-1,2,1,-1,-2 };
int diry[8] = { 2,1,1,2,-1,-2,-2,-1 };

bool chess[400][400] = { false , };
int side = 0;

int move(int x, int y, int cnt,int goalx,int goaly) {
	memset(chess, false, sizeof(chess));
	queue<tuple<int,int,int>> q;
	q.push(make_tuple(x,y,cnt));
	chess[y][x] = true;
	while (!q.empty()) {
		int dx = get<0>(q.front());
		int dy = get<1>(q.front());
		int dcnt = get<2>(q.front());
		q.pop();
		if (dx == goalx && dy == goaly) {
			return dcnt;
		}
		for (int i = 0; i < 8; i++) {
			int next_x = dirx[i] + dx;
			int next_y = diry[i] + dy;
			int next_cnt = dcnt+1;
			if (chess[next_y][next_x] == true) continue;
			if (next_x<0 || next_x>=side || next_y<0 || next_y>=side) continue;
			chess[next_y][next_x] = true;
			q.push({ next_x, next_y,next_cnt });
		}
	}
}


int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		side = 0;
		cin >> side;
		int piecex,piecey;
		cin >> piecex >> piecey;
		int goalx, goaly;
		cin >> goalx >> goaly;
		cout << move(piecex, piecey, 0, goalx, goaly)<<'\n';
	}
}