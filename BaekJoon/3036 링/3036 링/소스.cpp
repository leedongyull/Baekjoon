#include <iostream>

using namespace std;

int main(void) {
	int ring[100] = { 0, };
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> ring[i];
	}
	for (int i = 1; i < t; i++) {
		int a = ring[0];
		int b = ring[i];
		int small, big;
		if (a > b) {
			small = b;
			big = a;
		}
		else {
			small = a;
			big = b;
		}
		while (1) {
			if (big % small == 0) break;
			int temp = small;
			small = big % small;
			big = temp;
		}

		cout<<a/small<< "/" << b/small <<"\n";
	}


}