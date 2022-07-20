#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<string, string> domain;
	int cnt, pass;
	cin >> cnt >> pass;
	for (int i = 0; i < cnt; i++) {
		string adress, password;
		cin >> adress >> password;
		domain[adress] = password;
	}
	for (int j = 0; j < pass; j++) {
		string find;
		cin >> find;
		cout << domain[find] << "\n";
	}
}