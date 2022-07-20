#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	map<int, bool> a;
	map<int, bool> b;
	int acnt = 0;
	int bcnt = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a[num] = true;
		acnt++;
	}
	for (int j = 0; j < m; j++) {
		int number;
		cin >> number;
		b[number] = true;
		bcnt++;
	}
	for (auto i = b.begin(); i != b.end(); i++) {
		auto iterator = a.find(i->first);
		if (iterator != a.end()) {
			acnt--;
		}
		else continue;
	}
	for (auto i = a.begin(); i != a.end(); i++) {
		auto iterator = b.find(i->first);
		if (iterator != b.end()) {
			bcnt--;
		}
		else continue;
	}

	cout << acnt + bcnt;
}