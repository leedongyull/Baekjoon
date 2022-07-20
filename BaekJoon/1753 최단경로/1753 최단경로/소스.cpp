#include <iostream>
#include <cstring>
using namespace std;
int graph[20001] = { 0, };
int min(int a, int b) { return a < b ? a : b;; }
int main(void) {
	int vertex, edge;
	cin >> vertex >> edge;
	for (int i = 1; i <= vertex; i++) {
		graph[i] = 20;
	}
	int start_vertex;
	cin >> start_vertex;
	graph[start_vertex] = 0;
	for (int i = 1; i <= edge; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == start_vertex) {
			graph[b] = min(graph[b], c);
		}
		else {
			graph[b] = min(graph[a] + c, graph[b]);
		}
	}
	for (int i = 1; i <= vertex; i++) {
		if (graph[i] == 20) cout << "INF"<<'\n';
		else cout << graph[i]<<'\n';
	}
}