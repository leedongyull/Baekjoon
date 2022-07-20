#include <iostream>
#include <cstring>

using namespace std;

int top = 0;
int stack[10000] = { 0 };

void push(int a);
void pop(void);

int main(void) {
	int n, res = 0;
	string cmd;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> res;
			push(res);
		}
		else if (cmd == "pop") {
			pop();
		}
		else if (cmd == "size") {
			cout << top << '\n';
		}
		else if (cmd == "empty") {
			if (top == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (cmd == "top") {
			if (top == 0) cout << -1 << '\n';
			else cout << stack[top-1] << '\n';
		}
	}
}

void push(int a) {
	stack[top] = a;
	top++;
}

void pop() {
	if (top != 0) {
		cout << stack[top - 1] << '\n';
		top--;
	}
	else cout << "-1" << '\n';
}