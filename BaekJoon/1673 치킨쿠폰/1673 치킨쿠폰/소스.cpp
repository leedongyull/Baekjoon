#include <iostream>

using namespace std;

long long coupon(long long a, long long b);

int main(void) {
	long long cou, stamp;
	while (true) {
		cin >> cou >> stamp;
		if (cin.eof() == true) break;
		cout << coupon(cou, stamp) << endl;
	}
}

long long coupon(long long a, long long b) {
	long long res = 0,stamp=0;
	res = a;
	stamp += a;
	while (stamp > 0) {
		stamp-=b;
		res++;
		stamp++;
	}

	return res-1;
}