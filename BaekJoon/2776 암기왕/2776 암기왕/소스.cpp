#include <iostream>
#include <map>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		map<int, bool> diary;
		int n, m;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;
			diary[num] = true;
		}
		cin >> m;
		for (int j = 0; j < m; j++) {
			int nu;
			cin >> nu;
			auto iter = diary.find(nu);
			if (iter != diary.end()) {
				cout << "1" << '\n';
			}
			else cout << '0' << '\n';
		}

	}
}