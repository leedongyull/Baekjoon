#include <iostream>

using namespace std;

int tree[10];
int mul(int, int);

int main() {
	int num = 0,result=0,com=0;
	cin >> num;
	if (num > 10 || num<4) exit(0);

	for (int i = 1; i <= num; i++) {
		cin >> tree[i];
		if (tree[i] > 5 || tree[i] < 1) exit(0);
	}

	for (int i = 1; i < num; i++) {
		for (int j = i+1; j < num; j++) {
			for (int k = j + 1; k < num; k++) {
				result = mul(1,i)+mul(i+1, j) + mul(j+1, k) + mul(k+1, num);
				if(com<result) com = result;
			}
		}
	}

	cout << com;

}

int mul(int t, int f) {
	int res = 1;
	for (int i = t; i <= f; i++) {
		res *= tree[i];
	}

	return res;

}