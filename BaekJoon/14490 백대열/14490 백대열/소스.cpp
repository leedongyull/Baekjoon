#include <iostream>

using namespace std;

int main() {
	int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);

	int n = a;
	int m = b;
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (a % b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	printf("%d:%d", n / b, m / b);
}