#include <iostream>
#include <unordered_map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int card,find;
	cin >> card;
	unordered_map<long long, int>cdnum;
	for (int i = 0; i < card; i++) {
		long long a;
		cin >> a;
		cdnum[a]++;
	}
	cin >> find;
	for (int i = 0; i < find; i++) {
		long long k;
		cin >> k;
		cout << cdnum[k] << ' ';
	}
}