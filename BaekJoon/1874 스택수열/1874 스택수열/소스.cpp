#include <iostream>
using namespace std;

int arr[100010] = { 0, };
int stack[100010] = { 0, };
char out[300000] = { " ",};
int top = 0;
int k = 0;
int s = 1;

void push() {
	top++;
	stack[top] = s;
	s++;
}

void pop() {
	if (top == 0) return;
	top--;
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
		if (stack[top] < arr[i]) {
			while (1) {
				if (s > arr[i]) {
					cout << "NO";
					return 0;
				}
				push();
				out[k] = '+';
				k++;
				if (stack[top] == arr[i]) break;
			}
		}
		if (stack[top] == arr[i]) {
			pop();
			out[k] = '-';
			k++;
		}
		else {
			while (1) {
				pop();
				out[k] = '-';
				k++;
				if (stack[top] == arr[i]) break;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		cout << out[i] << '\n';
	}
	return 0;
}