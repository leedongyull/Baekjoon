#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;



string name[1000000];
string nolisee[1000000];

int main(void) {
	int n, k, s = 0;
	cin >> n >> k;

	for (int i = 0; i < n+k; i++) {
		cin >> name[i];
	}

	sort(name, name+n+k);

	for (int i = 0; i < n + k; i++) {
		if (name[i] == name[i + 1]) {
			nolisee[s] = name[i];
			s++;
		}
	}
	cout << s << "\n";
	for (int i = 0; i < s; i++) {
		cout << nolisee[i] << '\n';
	}
}