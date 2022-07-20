#include <iostream>

using namespace std;

int main() {
	char chess[8][8];
	bool arr[8][8];
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
		cin >> chess[i][j]; //체스판에 말의 위치 입력
		}
	}

	for (int i = 0; i < 8; i++) {          //흰칸과 검은칸을 번갈아 칠하기 위해 나머지 이용
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
				if (chess[i][j] == 'F') count++; //흰칸에 말이 있을경우 count++
			}
		}
	}


	cout << count;
	return 0;

}