#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(void) {
	int t, s = 1, sum = 0;
	int arr[9] = { 0, };
	int res[9] = { 0, };
	cin >> t;
	int r = t;
	for(int i=1;i<=t;i++){
		cin >> arr[i];
	}
	sort(arr+1, arr + t+1,greater<int>());
	for (int i = 1; i <= t; i++) {
		res[s] = arr[i];
		s++;
		if (i == t) break;
		res[s] = arr[t];
		t--;
		s++;
	}

	for (int i = 1; i < r; i++) {
		int num = res[i] - res[i + 1];
		num = abs(num);
		sum += num;
	}
	cout << sum;
}