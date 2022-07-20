#include <iostream>

using namespace std;

int main() {
	int i = 0;
	char sen[257][257];
	int res[100] = { 0, };

	while (1) {
		fgets(sen[i],257,stdin);
		if (sen[i][0] == '#') break;
		i++;
	}

	for (int j = 0; j < i; j++) {
		for (int k = 0; k < 257; k++) {
			if (sen[j][k] == 'a' || sen[j][k]=='A') res[j]++;
			else if (sen[j][k] == 'e' || sen[j][k] == 'E') res[j]++;
			else if (sen[j][k] == 'i' || sen[j][k] == 'I') res[j]++;
			else if (sen[j][k] == 'o' || sen[j][k] == 'O') res[j]++;
			else if (sen[j][k] == 'u' || sen[j][k] == 'U') res[j]++;
		}
		cout << res[j] << endl;
	}

	return 0;

}