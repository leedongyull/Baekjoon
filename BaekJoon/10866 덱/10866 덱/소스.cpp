#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	deque<int> dq;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string com;
		cin >> com;
		if (com == "push_back") {
			int a;
			cin >> a;
			dq.push_back(a);
		}
		if (com == "push_front") {
			int a;
			cin >> a;
			dq.push_front(a);
		}
		if (com == "front") {
			if (dq.size() == 0) cout << "-1" << '\n';
			else cout << dq.front()<<'\n';
		}
		if (com == "back") {
			if (dq.size() == 0) cout << "-1" << '\n';
			else cout << dq.back()<<'\n';
		}
		if (com == "size") {
			cout << dq.size()<<'\n';
		}
		if (com == "empty") {
			cout << dq.empty()<<'\n';
		}
		if (com == "pop_back") {
			if (dq.size() == 0) cout << "-1" << '\n';
			else {
				cout << dq.back()<<'\n';
				dq.pop_back();
			}
		}
		if (com == "pop_front") {
			if (dq.size() == 0) cout << "-1" << '\n';
			else {
				cout << dq.front()<<'\n';
				dq.pop_front();
			}
		}
	}
}