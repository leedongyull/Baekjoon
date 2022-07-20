#include <iostream>

using namespace std;

int main() {
	int num = 0,k=0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char name[150][30];
	int res[27] = { 0, };
	char print[27] = { ' ', };
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> name[i];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 27; j++) {
			if (name[i][0] == alpha[j]) {
				res[j]++;
			}
		}
	}

	for (int i = 0; i < 27; i++) {
		if (res[i] >= 5) {
			print[k] = alpha[i];
			k++;
		}
	}

	if (k == 0) cout << "PREDAJA";
	else cout << print;

	return 0;
}