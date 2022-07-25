#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
	map<string, bool> check;

	int n, m;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		check[a] = true;
	}
	for (int j = 0; j < m; j++) {
		string b;
		cin >> b;
		if (check[b] == true) cnt++;
	}
	cout << cnt;
}