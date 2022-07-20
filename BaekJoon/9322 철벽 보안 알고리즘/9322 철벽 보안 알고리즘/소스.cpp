#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		int arr[1001] = { 0, };
		string secret[1001] = { "", };
		map<string, int> key;
		for (int j = 1; j <= num; j++) {
			string a;
			cin >> a;
			key[a] = j;
		}
		for (int k = 1; k <= num; k++) {
			string b;
			cin >> b;
			arr[k] = key[b];
		}
		for (int s = 1; s <= num; s++) {
			string c;
			cin >> c;
			secret[arr[s]] = c;
		}
		for (int u = 1; u <= num; u++) {
			cout << secret[u] << ' ';
		}
		cout << '\n';
	}
}