#include <iostream>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);;
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		map<string, int> fashion;
		for (int j = 0; j < num; j++) {
			string a, b;
			cin >> a >> b;
			fashion[b]++;
		}
		int res = 1;
		for (auto i = fashion.begin(); i != fashion.end(); i++) {
			res *= (i->second + 1);
		}
		cout << res - 1 << '\n';
	}
}

