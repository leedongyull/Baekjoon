#include <iostream>

using namespace std;

int card[1000000];
int front=0, rear=0;

void push(int a) { card[rear++] = a; }
int pop(){ return card[front++]; }

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) push(i);

	while (rear - front > 1) {
		pop();
		push(card[front]);
		pop();
	}
	cout << card[front];
	return 0;
}