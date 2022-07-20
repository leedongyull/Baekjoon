#include <iostream>

using namespace std;

int sugar(int num) {
	int count = 0, n = num;
	while (num) {
		count+=num/5;
		num %= 5;
		if (num < 5 && num!=3) {
			while (1) {
				if (num % 3 != 0) {
					num += 5;
					count--;
					if (num == 0) break;
					if (num > n) return -1;
				}
				else {
					count+=num/3;
					return count;
				}
			}
		}
		else if (num == 3) {
			count++;
			return count;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	cout << sugar(n);

}