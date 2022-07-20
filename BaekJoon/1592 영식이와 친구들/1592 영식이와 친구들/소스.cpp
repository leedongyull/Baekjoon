#include <iostream>

using namespace std;

int main(void) {
	int num = 0, max = 0, len = 0, i = 1, count = 0;
	int person[1001] = { 0, };
	person[1] = 1;
	cin >> num >> max >> len;
	if (num < 3 || num>1000) exit(0);
	if (max > 1000 || len > num - 1)exit(0);
	while (1) {
		if (person[i] % 2 == 1) {
			i += len;
			if (i > num) {
				i %= num;
			}
			person[i]++;
			count++;
		}
		else if (person[i] % 2 == 0) {
			i -= len;
			if (i < 1)i += num;
			person[i]++;
			count++;
		}
		if (person[i] == max) break;
	}

	cout << count;
}