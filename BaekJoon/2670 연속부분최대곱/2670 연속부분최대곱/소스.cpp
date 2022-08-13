#include <iostream>
#include <cmath>

using namespace std;

double arr[10002] = { 0, };

double max(double a, double b) { return a > b ? a : b; }

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	double res = arr[1];
	for (int i = 2; i <= n; i++) {
		if (arr[i - 1] * arr[i] >= arr[i]) {
			arr[i] = arr[i - 1] * arr[i];
		}
		res = max(arr[i], res);
	}
	printf("%0.3lf", res);
}