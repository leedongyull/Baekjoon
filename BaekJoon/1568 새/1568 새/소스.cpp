#include <iostream>

using namespace std;

int main(void) {
	int num = 0, bird = 1, time = 1;
	cin >> num;
	while (1) {
		if (num - bird >= 0) num -= bird;
		else {
			bird = 1;
			num -= bird;
		}
		if (num == 0) break;
		time++;
		bird++;
	}
	cout << time << "\n";
}