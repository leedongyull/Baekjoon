#include <iostream>

using namespace std;

int main() {
	int s1 = 0, s2 = 0, s3 = 0, min = 0,max=0;
	int sum[100] = { 0, };

	cin >> s1 >> s2 >> s3;
	if (s1 < 2 || s1>20) exit(0);
	if (s2 < 2 || s2>20) exit(0);
	if (s3 < 2 || s3>40) exit(0);

	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				sum[i + j + k]++;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		if (sum[i] > max) {
			max = sum[i];
			min = i;
		}
	}

	cout << min;

	return 0;

}