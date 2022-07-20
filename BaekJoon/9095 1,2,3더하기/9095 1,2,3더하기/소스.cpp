#include <iostream>

using namespace std;


int main(void) {
	int t;

	int plus[11] = {0,};
	plus[0] = 0;
	plus[1] = 1;
	plus[2] = 2;
	plus[3] = 4;
	for (int i = 4; i < 11; i++) {
		plus[i] = plus[i - 1] + plus[i - 2] + plus[i - 3];
	}

	int num = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >>num;
		cout << plus[num]<<'\n';
	}
}