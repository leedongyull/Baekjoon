#include <iostream>

using namespace std;

int arr[8] = {1,2,3,4,5,6,7,8 };
int real[8] = { 0, };
bool check[8] = { false, };
int s;

void backtracking(int n, int m, int index) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << real[i]<< ' ';
		}
		cout << '\n';
	}


	for (int i = 0; i < n; i++) {
		if (check[i] == true) continue;
		check[i] = true;
		real[s] = arr[i];
		s++;
		backtracking(n, m, index + 1);
		check[i] = false;
		s--;
	}



}
int main(void) {
	int n, m;
	cin >> n >> m;
	backtracking(n, m,0);
}