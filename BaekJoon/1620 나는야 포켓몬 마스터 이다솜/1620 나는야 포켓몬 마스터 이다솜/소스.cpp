#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int cnt, find;
	cin >> cnt >> find;
	map<int, string> pokemon;
	map<string, int> pokenum;
	for (int i = 1; i <= cnt; i++) {
		string pke;
		cin >> pke;
		pokemon[i] = pke;
		pokenum[pke] = i;
	}
	for (int i = 1; i <= find; i++) {
		char a[21];
		cin >> a;
		if (a[0] >= '0' && a[0] <= '9') {
			cout << pokemon[atoi(a)] << '\n';
		}
		else {	
			cout << pokenum[a]<<'\n';
		}
	}
}