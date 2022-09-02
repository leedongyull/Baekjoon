#include <iostream>

using namespace std;

unsigned long long km[100001] = { 0, };
unsigned long long oil[100001] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

int main() {
	unsigned long long n;
	unsigned long long res = 0;
	unsigned long long now = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> km[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> oil[i];
	}
	now = oil[0];
	res = now * km[1];
	for (int i = 1; i < n; i++) {
		if (now < oil[i]) res += now * km[i+1];
		else {
			now = oil[i];
			res += now * km[i+1];
		}
	}
	cout << res;

}