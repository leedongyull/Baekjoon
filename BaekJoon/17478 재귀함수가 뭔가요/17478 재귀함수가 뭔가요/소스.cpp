#include <iostream>

using namespace std;

void recursion(int n,int cnt) {
	if (n == cnt) {
		for (int j = cnt * 4; j > 0; j--) {
			cout << '_';
		}
		cout << "\"����Լ��� ������?\"\n";
		for (int j = cnt * 4; j > 0; j--) {
			cout << '_';
		}
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		for (int i = 0; i < n; i++) {
			for (int j = cnt*4; j > 0; j--) {
				cout << '_';
			}
			cout << "��� �亯�Ͽ���.\n";
			cnt--;
		}
		return;
	}
	for (int i = 0; i < cnt * 4; i++) {
		cout << "_";
	}
	cout << "\"����Լ��� ������?\"\n";
	for (int i = 0; i < cnt * 4; i++) {
		cout << "_";
	}
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	for (int i = 0; i < cnt * 4; i++) {
		cout << "_";
	}
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	for (int i = 0; i < cnt * 4; i++) {
		cout << "_";
	}
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	recursion(n, cnt + 1);
};

int main() {
	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursion(n,0);
	cout << "��� �亯�Ͽ���.\n";
}