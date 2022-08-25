#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int start, end;
		cin >> start >> end;
		v.push_back(make_pair(end, start));
	}
	sort(v.begin(), v.end());
	int time = v[0].first;
	int count = 1;
	for (int i = 1; i < t; i++) {
		if (time <= v[i].second) {
			count++;
			time = v[i].first;
		}
	}
	cout << count;
}