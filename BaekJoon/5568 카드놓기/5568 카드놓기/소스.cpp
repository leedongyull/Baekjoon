#include <iostream>
#include <map>
#include <string>

using namespace std;

int card, sel;
map<string, int> cd;
bool visited[10];
string cdnum[11] = { " ", };

void dfs(string ca,int s, int cnt) {
	if (cnt == s) {
		cd[ca]++;
	}
	else {
		for (int i = 0; i < card; i++) {
			if (visited[i] == false) {
				visited[i] = true;
				dfs(ca+cdnum[i], s, cnt + 1);
				visited[i] = false;
			}
			else continue;
		}
	}
}

int main(void) {
	cin >> card >> sel;
	for (int i = 0; i < card; i++) {
		cin >> cdnum[i];
		visited[i] = false;
	}
	dfs("", sel, 0);
	int res = 0;

	for (auto i = cd.begin(); i != cd.end(); i++) {
		res++;
	}

	cout << res;

}