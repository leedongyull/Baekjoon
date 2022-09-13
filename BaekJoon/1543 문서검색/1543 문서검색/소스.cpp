#include <iostream>
#include <string>

using namespace std;

int main() {
	string doc;
	string ans;
	getline(cin, doc);
	getline(cin, ans);
	int cnt = 0;
	int anslen = (int)ans.length();
	if (doc.length() < anslen) cout << 0;
	else {
		for (int i = 0; i <= doc.length() - anslen; i++) {
			if (doc[i] == ans[0]) {
				string sub = doc.substr(i, anslen);
				if (sub == ans) {
					cnt++;
					i += (anslen - 1);
				}
			}
		}
		cout << cnt;
	}
}