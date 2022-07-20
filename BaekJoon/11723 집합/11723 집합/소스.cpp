#include <iostream>

using namespace std;

bool num[21] = { false, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string command;
		cin >> command;
		if (command == "add") {
			int number;
			cin >> number;
			if (num[number] == false) num[number] = true;
			else continue;
		}
		if (command == "remove") {
			int number;
			cin >> number;
			if (num[number] == true) num[number] = false;
			else continue;
		}
		if (command == "toggle") {
			int number;
			cin >> number;
			if (num[number] == true) num[number] = false;
			else num[number] = true;
		}
		if (command == "all") {
			for (int i = 1; i <= 20; i++) {
				num[i] = true;
			}
		}
		if (command == "empty") {
			for (int i = 1; i <= 20; i++) {
				num[i] = false;
			}
		}
		if (command == "check") {
			int number;
			cin >> number;
			if (num[number] == true) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
	}
}