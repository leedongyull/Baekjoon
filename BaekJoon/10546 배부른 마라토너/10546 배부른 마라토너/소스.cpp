#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	map<string, bool> marathon;
	for (int i = 1; i <= 2*t-1; i++) {
		string per;
		cin >> per;
		if (marathon[per] == false) {
			marathon[per] = true;
		}
		else marathon[per] = false;
	}

	for (auto i = marathon.begin(); i != marathon.end(); i++) {
		if (i->second == true) {
			cout << i->first;
		}
	}
}