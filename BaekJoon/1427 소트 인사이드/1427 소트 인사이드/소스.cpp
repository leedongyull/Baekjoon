#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void) {
	char num[12] = { 0 };
	int n[11] = { 0, };
	fgets(num, 12, stdin);
	for (int i = 0; i < strlen(num); i++) {
		n[i] = num[i] - '0';
	}
	sort(n, n + strlen(num), greater<int>());
	for (int i = 0; i < strlen(num)-1; i++) {
		cout << n[i];
	}
}