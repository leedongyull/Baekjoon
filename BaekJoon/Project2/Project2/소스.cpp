#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int num[1000] = { 0, };
	int n = 0;
	int count = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	while (1) {
		sort(num+1, num+n,greater<int>());
		if (num[0] <= num[1]) {
			num[1]--;
			num[0]++;
			count++;
		}
		else break;
	}
	cout << count;
}