#include <iostream>

using namespace std;

int pow(long long a, long long b,long long c) {
	if (b == 0) return 1;
	else {
		long n = pow(a, b / 2,c);
		int temp = n * n % c;
		if (b % 2 == 0) {
			return temp;
		}
		else return (a * temp)%c;
	}
}

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	cout << pow(a, b, c);

}