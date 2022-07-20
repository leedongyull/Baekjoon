#include <iostream>

using namespace std;

int main(void) {
	int n;
	int time[100000] = { 0, };
	int conference[100000] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> conference[i] >> time[i];
	}
	int cnt=0;
	int i = 0;
	int j = 0;
	while (i != n) {
		if (i == conference[j]) {
			j += time[j];
			cnt++;
		}
		else 	i++;
	}
	cout << cnt;
}