#include <iostream>
#include <deque>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	deque <pair<int,int>>dq;
	bool m = false;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num, index, findnum = 0, maxcnt = 0, cnt = 0;
		cin >> num >> index;
		for (int j = 0; j < num; j++) {
			int a;
			cin >> a;
			dq.push_back({ a,j });
			if (j == index) findnum = a;
		}
		while(!dq.empty()) {
			int k=dq.front().first;
			int z = dq.front().second;
			dq.pop_front();
			if (dq.empty() == true) m = true;
			for (int s = 0; s < dq.size(); s++) {
				if (dq.empty() == true) {
					m = true;
					break;
				}
				if (k < dq.at(s).first) {
					m = false;
					break;
				}
				m = true;
			}
			if (m == true) {
				cnt++;
				if (k == findnum&&z==index) {
					cout << cnt << '\n';
				}
			}
			if (m == false) {
				dq.push_back({ k, z});
			}
			m = false;
		}
		cnt = 0;
	}
}