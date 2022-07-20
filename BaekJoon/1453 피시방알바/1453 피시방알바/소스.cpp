#include <iostream>

using namespace std;

int main(void) {
	int n, k = 0, count = 0;
	int pc[100] = { 0, };
	cin >> n;
	if (n <= 100 && n>0) {
		for (int i = 0; i < n; i++) {
			cin >> k;
			if (k > 100) exit(0);
			if (pc[k-1] == 0) {
				pc[k-1]++;
			}
			else count++;
		}
	cout << count;
	}
}