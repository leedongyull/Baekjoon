#include <iostream>

using namespace std;

int arr[8] = { 1,2,3,4,5,6,7,8 };
bool check[8] = { false, };
int s = 0;

void combination(int n, int r, int index) {
	if (index == r){
		for (int i = 0; i < n; i++) {
			if (check[i] == true) {
				cout << arr[i] << ' ';
			}
		}
		cout << '\n';
		return;
	}

	for (int i = s; i < n; i++) {
		if (check[i] == true) continue;
		check[i] = true;
		s = arr[i];
		combination(n, r, index + 1);
		check[i] = false;
	}

}

int main(void) {
	int n, m;
	cin >> n >> m;
	combination(n, m, 0);
}