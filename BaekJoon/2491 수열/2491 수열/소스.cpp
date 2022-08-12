#include <iostream>

using namespace std;

int arr[100002] = { 0, };

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int i = 1;
	int increase=1;
	int decrease = 1;
	int max = 0;
	while (i != n) {
		if (n == 1) break;
		if (arr[i] <= arr[i + 1]) increase++;
		else increase = 1;
		if (arr[i] >= arr[i + 1]) decrease++;
		else decrease = 1;
		if (max < increase) max = increase;
		if (max < decrease)	max = decrease;
		i++;
	}
	if (n == 1) cout << 1;
	else cout << max;
}