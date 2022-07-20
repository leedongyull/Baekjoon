#include <iostream>

using namespace std;

int main() {
	long long num = 0, ;
	long long cluster = 0;
	long long res=0;
	long long file[1000] = { 0, };

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> file[i];
	}

	cin >> cluster;

	for (int i = 0; i < num; i++) {
		if (file[i] == 0) continue;
		if (file[i] / cluster < 1) {
			res += cluster;
		}
		else {
			if (file[i] % cluster == 0) {
				file[i] /= cluster;
				res += file[i] * cluster;
			}
			else {
				file[i] /= cluster;
				file[i];
				res += file[i] * cluster;
			}
		}
	}

	cout << res;

	return 0;


}