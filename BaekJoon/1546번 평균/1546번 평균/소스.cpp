#include <iostream>

using namespace std;

int main() {
	int num = 0;
	float grade[1000] = { 0, };
	float res = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> grade[i];
	}
	float max = grade[0];
	for (int i = 0; i < num; i++) {
		if (grade[i] > max) max = grade[i];
	}

	for (int i = 0; i < num; i++) {
		grade[i] = grade[i] / max * 100;
	}
	
	for (int i = 0; i < num; i++) {
		res += grade[i];
	}

	cout << res / num;

	return 0;
}