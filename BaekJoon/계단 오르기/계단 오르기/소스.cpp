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
	res[0] = stair[0]; // ����� 1���϶�
	res[1] = max(stair[0]+stair[1], stair[1]); //����� 2���̻��̸�, �ϳ��� �°ſ� �ΰ��� �°� ���ؼ� �� ū��
	res[2] = max(stair[0] + stair[2], stair[1] + stair[2]);
	for (int i = 3; i < n; i++) res[i] = max(res[i - 3] + stair[i - 1] + stair[i], res[i - 2] + stair[i]);
	cout << res[n - 1];
}