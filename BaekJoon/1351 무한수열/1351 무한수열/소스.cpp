#include <iostream>
#include <map>
#include <math.h>

using namespace std;

long long n, p, q;
map<long long, long long> a;

long long dfs(long long cnt) {
	if (a.count(cnt)!=0) return a[cnt];
	return a[cnt] = dfs(cnt / q) + dfs(cnt / p);
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> p >> q;
	a[0] = 1;
	cout << dfs(n);
}