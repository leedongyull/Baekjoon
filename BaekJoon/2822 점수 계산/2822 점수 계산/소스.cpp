#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int num[8];
	bool check[8] = { false, };
	int n[5];
	int max = 0, count = 0, sum = 0, m = 0;
	for (int i = 0; i < 8; i++) {
		cin >> num[i];
	}
	
	while (1) {
		for (int i = 0; i < 8; i++) {
			if (num[i] >= max&&check[i]==false) {
				max = num[i];
				m = i;
			}
		}
		check[m] = true;
		n[count] = m+1;
		count++;
		max = 0;
		if (count == 5) break;
	}

	for (int i = 0; i < 8; i++) {
		if (check[i] == true) sum += num[i];
	}
	cout << sum << endl;
	sort(n, n + 5);
	for (int i = 0; i < 5; i++) {
		cout<< n[i] << " ";
	}
}