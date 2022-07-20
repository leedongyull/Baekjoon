#include <iostream>
#include <cstring>


using namespace std;



int main(void) {
	string sen;
	string res;
	cin >> sen;
	res = "{";
	for (int i = 0; i < sen.size()-2; i++) {
		for (int j = i + 1; j < sen.size() - 1; j++) {
			string mun;
			for (int k = i; k >= 0; k--) {
				mun += sen[k];
			}
			for (int k = j; k > i; k--) {
				mun += sen[k];
			}
			for (int k = sen.size()-1; k > j; k--) {
				mun += sen[k];
			}
			if (res > mun) res = mun;
		}
	}
	cout << res << endl;
}

