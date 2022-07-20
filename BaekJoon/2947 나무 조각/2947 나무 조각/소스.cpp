#include <iostream>

using namespace std;

int main(void) {
	int wood[5] = { 0, };
	int count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> wood[i];
	}
	while (1) {
		for (int i = 0; i < 4; i++) {
			if (wood[i] > wood[i + 1]) {
				int temp = wood[i];
				wood[i] = wood[i + 1];
				wood[i + 1] = temp;
				for (int i = 0; i < 5; i++) {
					cout << wood[i] << ' ';
				}
				cout << endl;
			}
			else count++;
		}
		if (count == 4) break;
		else count = 0;
	}
}