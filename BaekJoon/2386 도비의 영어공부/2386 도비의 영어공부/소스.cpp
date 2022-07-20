#include <iostream>
#include <cstring>

using namespace std;

int main(void) {

	while (1) {
		char k;
		int count = 0;
		char sen[252];
		cin >> k;
		if (k == '#') break;
		fgets(sen, 252, stdin);

		for (int i = 0; i < strlen(sen); i++) {
			if (sen[i] == k || sen[i] == k - 32) count++;
		}
		cout << k << " " << count << endl;
	}
}