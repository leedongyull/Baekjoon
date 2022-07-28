#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

	vector<pair<int, int>> dijkstra[20102];
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > >pq;
	int d[20102] = { 0, };

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int INF = 987654321;
	int v, e, start;
	int st, end, weight;
	cin >> v >> e;
	cin >> start;
	for (int i = 0; i < e; i++) {
		cin >> st >> end >> weight;
		dijkstra[st].push_back(make_pair(end, weight));
	}
	for (int i = 1; i <= v; i++) {
		d[i] = INF;
	}
	d[start] = 0;
	pq.push(make_pair(0, start));
	
	while (!pq.empty()) {
		int sum = pq.top().first;
		int current = pq.top().second;
		pq.pop();
		for (int i = 0; i < dijkstra[current].size(); i++) {
			int go = dijkstra[current][i].first;
			int w = dijkstra[current][i].second;
			if (sum + w < d[go]) {
				d[go] = sum + w;
				pq.push(make_pair(sum + w, go));
			}
		}
	}
	for (int i = 1; i <= v; i++) {
		if (d[i] == INF) cout << "INF\n";
		else cout << d[i] << '\n';
	}
}