#include <iostream>

using namespace std;

int main(void){
	int a[20] = { 0, };
	int num =0, k = 0;
	char c = ',';

	cin >> num >> k;

	for (int i = 0; i < num-1; i++) {
		cin >> a[i] >> c ;
	}
	cin >> a[num-1];

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < num; j++) {
			a[j] = a[j + 1] - a[j];
		}
		num--;
	}

	for (int i = 0; i < num-1; i++) {
		cout << a[i] << ",";
	}
	cout << a[num - 1];

}