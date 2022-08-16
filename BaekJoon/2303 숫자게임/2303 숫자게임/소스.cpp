#include <iostream>

using namespace std;

int n[1002][6] = { 0, };
int res[1002] = { 0, };

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> n[i][j];
		}
	}
	int fin = 0;
	int person = 0;
	for (int i = 1; i <= num; i++) {
		int max = 0;
		for (int j = 3; j <= 5; j++) {
			for (int k = 2; k < j; k++) {
				for (int s = 1; s < k; s++) {
					int temp = n[i][j] + n[i][k] + n[i][s];
					if (temp >= 10) temp %= 10;
					if (max < temp) max = temp;
				}
			}
		}
		if (fin <= max) {
			person = i;
			fin = max;
		}
	}
	cout << person;
}