#include <iostream>

using namespace std;

int main() {
	char chess[8][8];
	bool arr[8][8];
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
		cin >> chess[i][j]; //ü���ǿ� ���� ��ġ �Է�
		}
	}

	for (int i = 0; i < 8; i++) {          //��ĭ�� ����ĭ�� ������ ĥ�ϱ� ���� ������ �̿�
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if(j%2==0) arr[i][j] = true;
				else arr[i][j] = false;
			}
			else {
				if (j % 2 == 0) arr[i][j] = false;
				else arr[i][j] = true;
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[i][j] == true) {
				if (chess[i][j] == 'F') count++; //��ĭ�� ���� ������� count++
			}
		}
	}


	cout << count;
	return 0;

}