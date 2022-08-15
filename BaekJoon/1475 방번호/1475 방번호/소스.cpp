#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int num[10] = { 0, };
string arr;

int main() {
	cin >> arr;
	for (int i = 0; i < arr.length(); i++) {
		int a = arr[i]-48;
		if (a == 9) num[6]++;
		else num[a]++;
	}
	int max = 1;
	if (num[6] % 2 == 0) {
		num[6] = ceil(num[6] / 2);
	}
	else num[6] = ceil(num[6] / 2) + 1;
	for (int i = 0; i <= 9; i++) {
		if (max < num[i]) max = num[i];
	}
	cout << max;
}