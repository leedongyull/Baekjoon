#include <iostream>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	map<int, int> dotx;
	map <int, int> doty;
	for (int i = 1; i <= t; i++) {
		int x, y;
		cin >> x >> y;
		dotx[x]++;
		doty[y]++;
	}
	int sum = 0;
	for (auto i = dotx.begin(); i != dotx.end(); i++) {
		if(i->second>=2) sum++;
	}
	for (auto i = doty.begin(); i != doty.end(); i++) {
		if (i->second >= 2) sum++;
	}
	cout << sum;
}