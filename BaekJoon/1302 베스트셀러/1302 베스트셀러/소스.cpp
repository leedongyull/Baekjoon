#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void) {
	string best[2000];
	string real[2001];
	string book;
	int max = 0;
	int count = 0;
	int n, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> best[i];
	}
	sort(best, best + n);
	string temp = best[0];
	for (int i = 0; i <= n; i++) {
		if (best[i] == temp) count++;
		else {
			if (max < count) {
				max = count;
				book = temp;
			}
			temp = best[i];
			count = 1;
		}
	}
	cout << book;
}