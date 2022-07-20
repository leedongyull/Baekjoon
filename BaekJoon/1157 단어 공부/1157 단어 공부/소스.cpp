#include <iostream>

using namespace std;

int main(void) {
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	char Alp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int k[27] = { 0, };
	int max = 0, count = 0, c = 0;
	char sen[1000001] = { 0 };
	fgets(sen, 1000001, stdin);
	for (int i = 0; i < 1000001; i++) {
		for (int j = 0; j < 26; j++) {
			if (sen[i] == Alp[j] || sen[i] == alpha[j]) k[j]++;
		}
		if (sen[i] == '\0') break;
	}

	for (int i = 0; i < 27; i++) {
		if (k[i] > max) {
			max = k[i];
			c = i;
		}
	}
	for (int i = 0; i < 27; i++) {
		if (max == k[i]) count++;
	}

	if (count > 1) cout << "?";
	else cout << Alp[c];
}