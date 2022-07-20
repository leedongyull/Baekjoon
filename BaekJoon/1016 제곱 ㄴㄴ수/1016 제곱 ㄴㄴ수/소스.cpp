#include <iostream>

using namespace std;

int main(void) {
	long long min, max;
	cin >> min >> max;
	long long i = 2,count=0;
	while (1) {
		long long squre = i * i;
		if (min % squre == 0) {
			count++;
			i++;
		}
		else i++;
		if (min < squre) {
			min++;
			i = 2;
		}
		if (min == max) break;
	}
	cout << max - count;
}