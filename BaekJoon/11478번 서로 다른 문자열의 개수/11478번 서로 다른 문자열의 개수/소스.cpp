#include <iostream>
#include<map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	map<string, int> m;

	string a="";
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			a += s[j];
			m[a]++;
		}
		a = "";
	}
	cout << m.size();
}