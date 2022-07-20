#include <iostream>
using namespace std;
	int ballon[1001] = { 0, };
	bool bal[1001] = { false, };
	int num;

bool check() {
	for (int i = 1; i <= num; i++) {
		if (bal[i] == false) return true;
	}
	return false;
}

int main(void) {
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> ballon[i];
	}
	int k = 1;
	while (1) {
		bool sign = false;
		bal[k] = true;
		cout << k <<" ";
		if (check() == false) break;
		if (ballon[k] > 0) sign = true;
		else sign = false;
		int cnt = ballon[k];
		while (1) {
			if (sign == true) {
				k++;
				cnt--;
				if (k < 1)k += num;
				else if (k > num)k -= num;
				if (bal[k] == true) {
					while (bal[k] == true) {
						k++;
						if (k < 1)k += num;
						else if (k > num)k -= num;
					}
				}
				if (cnt == 0) break;
			}
			else {
				k--;
				cnt++;
				if (k < 1)k += num;
				else if (k > num)k -= num;
				if (bal[k] == true) {
					while (bal[k] == true) {
						k--;
						if (k < 1)k += num;
						else if (k > num)k -= num;
					}
				}
				if (cnt == 0) break;
			}
		}
	}
}