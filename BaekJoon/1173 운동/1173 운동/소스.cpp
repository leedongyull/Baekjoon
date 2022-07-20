#include <iostream>

using namespace std;

int main() {
	int min = 0, max = 0, time = 0, plus = 0, minus = 0,pulse=0;
	int count = 0 , exer=0;

	cin >> time >> min >> max >> plus >> minus;
	if (time < 1 || time>200) exit(0);
	if (plus < 1 || plus>200) exit(0);
	if (minus < 1 || minus>200) exit(0);
	if (min < 50 || min>200) exit(0);
	if (max < 50 || max>200) exit(0);
	
	pulse = min;

	while (1) {
		if (pulse + plus <= max) {
			count++;
			exer++;
			pulse += plus;
		}
		else {
			count++;
			if (pulse - minus >= min)	pulse -= minus;
			else pulse = min;
		}

		if (min + plus > max) {
			cout << "-1";
			exit(0);
		}

		if (exer == time) break;
	}

	cout << count;

	return 0;
}
