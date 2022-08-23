#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[100001];
queue<int> q;

int arr[100001] = { 0, };

int main() {
	int t;
	cin >> t;
	for (int i = 1; i < t; i++) {
		int s, e;
		cin >> s >> e;
		v[s].push_back(e);
		v[e].push_back(s);
	}
	arr[1] = 1;
	q.push(1);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < v[cur].size(); i++) {
			int num = v[cur][i];
			if (arr[num]!=0) continue;
			else {
				q.push(num);
				arr[num] = cur;
			}
		}
	}
	for (int i=2; i <= t; i++) {
		cout << arr[i]<<'\n';
	}
}