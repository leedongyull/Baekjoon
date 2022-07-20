#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char sen[100];
	bool minus = false;

	cin >> sen;

	int res = 0;
	int num1 = 0;

	for (int i = 0; i <= strlen(sen); i++) {
		if (sen[i] >= '0' && sen[i] <= '9') {
			num1 += sen[i] - 48;
			if (sen[i + 1] >= '0' && sen[i + 1] <= '9') {
				num1 *= 10;
			}
		}
		else {
			if (minus == true) {
				res -= num1;
				num1 = 0;
			}
			else {
				res += num1;
				num1 = 0;
			}
		}
		if (sen[i] == '-') {
			minus = true;
		}
	}

	cout << res;
}