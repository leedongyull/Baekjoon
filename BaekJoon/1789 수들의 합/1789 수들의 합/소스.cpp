#include <iostream>

using namespace std;

int main(void) {
	long long num;
	long long i = 1, count = 0, sum = 0;
	cin >> num;
	while (1) {
		sum = i * (i + 1) / 2;
		i++;
		count++;
		if (sum > num) break;
	}
	cout << count-1;
}