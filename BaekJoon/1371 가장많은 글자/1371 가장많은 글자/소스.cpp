#include <iostream>

using namespace std;

int main(void) {
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int al[27] = { 0, };
	char a=' ';
	char max[27] = { ' ', };
	int m = 0;
	int k = 0;

	while ((a = getchar()) != EOF) {
		for (int i = 0; i < 27; i++) {
			if (a == alpha[i]) al[i]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (al[i] > m) {
			m = al[i];
		}
	}
	for (int i = 0; i < 27; i++) {
		if (al[i] == m) {
			max[k] = alpha[i];
			k++;
		}
	}

	for (int i = 0; i < k; i++) {
		cout << max[i];
	}
}