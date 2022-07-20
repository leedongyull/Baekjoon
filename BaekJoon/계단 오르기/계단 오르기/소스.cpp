#include <iostream>

using namespace std;

int stair[300] = { 0, };
int res[300] = { 0, };

int max(int a, int b) { return a > b ? a : b; }


int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stair[i];
	}
	res[0] = stair[0]; // 계단이 1개일때
	res[1] = max(stair[0]+stair[1], stair[1]); //계단이 2개이상이면, 하나씩 온거와 두개씩 온거 비교해서 더 큰거
	res[2] = max(stair[0] + stair[2], stair[1] + stair[2]);
	for (int i = 3; i < n; i++) res[i] = max(res[i - 3] + stair[i - 1] + stair[i], res[i - 2] + stair[i]);
	cout << res[n - 1];
}