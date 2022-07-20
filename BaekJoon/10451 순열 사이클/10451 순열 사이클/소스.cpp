#include <iostream>
#include <cstring>
using namespace std;

int arr[1001] = { 0, };
bool check[1001] = { false, };


int main(void) {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int cycle = 0;
		memset(arr, 0, sizeof(arr));
		memset(check, false, sizeof(check));
		int n;
		cin >> n;
		for (int j = 1; j <= n; j++) {
			cin >> arr[j];
		}
		for (int j = 1; j <= n; j++) {
			if (check[j] == false) {
				check[j] = true;
				int k = j;
				while (1) {
					if (check[arr[k]] == false) {
						check[arr[k]] = true;
						k = arr[k];
					}
					else {
						cycle++;
						break;
					}
				}
			}
		}
		cout << cycle<<"\n";

	}
}