#include <iostream>

using namespace std;

int main() {
	int level = 0;

	while (1) {
		level++;
		bool die = false;
		int real = 0, proper = 0, action = 0;
		char act = ' ';
		cin >> proper >> real;
		if (proper != 0) {
			if (proper < 10 || proper>1000) exit(0);
			if (real < 10 || real>1000) exit(0);
		}
		if (proper == 0&&real==0) break;
		while (1) {
			cin >> act >> action;
			if (act != '#') {
				if (action < 1 || action > 999) exit(0);
			}

			if (act == '#') break;
			else if (act == 'E') {
				if (die == true) continue;
				real -= action;
			}
			else if (act == 'F') {
				if (die == true) continue;
				real += action;
			}
			if (real <= 0) die = true;
		}
		if (real > proper / 2 && real < proper * 2) cout<<level<< " :-)"<<endl;
		else if (die == true) cout<<level<< " RIP" << endl;
		else cout<<level<< " :-(" << endl;
	}
	
	return 0;
}