#include <iostream>

using namespace std;

int main(void) {
	int n, count1 = 0, count2 = 0;
	int num[100] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		for (int j = 2; j < num[i]; j++) {
			if (num[i] % j == 0) count1++;
		}
		if (num[i] != 1 && count1 == 0) count2++;
		count1 = 0;
	}

	cout << count2;
}