#include <iostream>

using namespace std;

int main(void) {
	int num=0, L=0, count = 0, i = 0;
	cin >> num >> L;
	if (L > 10 || L < 0) exit(0);
	while (count != num) {
		i++;
		if (i == L)continue;
		else if (i / 10 == L || i % 10 == L)continue;
		else if (i / 100 == L || i % 100 == L)continue;
		else if (i / 1000 == L || i % 1000 == L)continue;
		else if (i / 10000 == L || i % 10000 == L)continue;
		else if (i / 100000 == L || i % 100000 == L)continue;
		else if (i / 1000000 == L || i % 1000000 == L)continue;
		count++;
	}
	cout << i;
}