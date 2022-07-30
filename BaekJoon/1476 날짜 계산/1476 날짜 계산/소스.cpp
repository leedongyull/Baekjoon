#include <iostream>

using namespace std;

int main() {
	int e=0, s=0, m=0;
	cin >> e >> s >> m;
	int et=1, st=1, mt=1;
	int cnt = 1;
	while (1) {
		if (et == e) {
			if (st == s) {
				if (mt == m) {
					break;
				}
			}
		}
		et++;
		if (et > 15) et -= 15;
		st++;
		if (st > 28) st -= 28;
		mt++;
		if (mt > 19) mt -= 19;
		cnt++;
	}
	cout << cnt;
}