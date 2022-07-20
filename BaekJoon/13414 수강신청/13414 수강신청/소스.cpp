#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int possible, person;
	cin >> possible >> person;
	unordered_map<string, int> per;
	for (int i = 1; i <= person; i++) {
		string a;
		cin >> a;
		per[a] = i;
	}
	vector<pair<string, int>> vec(per.begin(), per.end());
	sort(vec.begin(), vec.end(),cmp);
	int cnt = 0;
	for (auto i : vec) {
		cout << i.first << '\n';
		cnt++;
		if (cnt == possible)break;
	}
}
