#include <iostream>

using namespace std;

int main() {
	int num = 0;
	cin >> num;
	int i = 0;
	int count = 0;
	int res = 0;
	while (count!=num) {
		i++;
		res = i;
		while (res != 0) {
			if (res % 1000 == 666) {
				count++;
				break;
			}
			else res /= 10;
		}
	}
	cout << i;
}