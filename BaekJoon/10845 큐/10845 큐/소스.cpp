#include <iostream>
#include <cstring>

using namespace std;

int queue[20000] = { 0, };
int front=0, back = 0;

void push(int a) { queue[back++] = a; }
int pop() { 
	if (front < back)return queue[front++];
	else return -1;
}

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string com;
		cin >> com;
		if (com == "push") {
			int k = 0;
			cin >> k;
			push(k);
		}
		else if (com == "pop") {
			cout << pop() << '\n';
		}
		else if (com == "front") {
			if (front == back) cout << "-1"<<'\n';
			else cout << queue[front]<<'\n';
		}
		else if (com == "back") {
			if (front == back) cout << "-1"<<'\n';
			else cout << queue[back-1]<<'\n';
		}
		else if (com == "size") cout << back - front << '\n';
		else if (com == "empty") {
			if (front == back) cout << "1"<<'\n';
			else cout << "0"<<'\n';
		}
	}
}