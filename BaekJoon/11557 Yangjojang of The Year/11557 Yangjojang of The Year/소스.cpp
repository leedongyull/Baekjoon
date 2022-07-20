#include <iostream>

using namespace std;

int main(void) {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int n;
		string univ;
		string best;
		long long alc = 0, max = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> univ >> alc;
			if (max < alc) {
				max = alc;
				best = univ;
			}
		}
		cout << best<<'\n';
	}
}