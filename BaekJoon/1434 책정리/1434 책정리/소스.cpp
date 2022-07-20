#include <iostream>

using namespace std;

int main(void) {
	int box = 0, book = 0, k = 0, s = 0, res = 0;
	int bo[1000] = { 0, };
	int bok[1000] = { 0, };
	bool tape[1000] = { false, };
	cin >> box >> book;
	for (int i = 0; i < box; i++) {
		cin >> bo[i];
	}
	for (int i = 0; i < book; i++) {
		cin >> bok[i];
	}

	while (1) {
		if (bok[s] == 0) {
			tape[k] = true;
			k++;
			if (k == box + 1) break;
		}
		else if (bo[k] / bok[s] >= 1) {
			bo[k] -= bok[s];
			s++;
		}
		else if (bo[k] / bok[s] < 1) {
			tape[k] = true;
			k++;
		}
		if (k==box+1) break;
	}
	k = 0;

	while (tape[k]==true) {
		res += bo[k];
		k++;
	}

	cout << res;
}