#include <iostream>
#include <algorithm>
#include<cstdio>
#include <vector>

using namespace std;

unsigned long long n[101] = { 0, };
vector<int> result;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	else return gcd(b, a % b);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int num;
	unsigned long long gcdN = 1000000000;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n[i];
	}
	sort(n, n + num);
	int init = n[1] - n[0];
	gcdN = init;
	for (int i = 2; i < num; i++) {
		int res = n[i] - n[i - 1];
		gcdN = gcd(gcdN, res);
	}
	for (int i = 2; i*i <= gcdN; i++) {
		if (gcdN % i == 0) {
			result.push_back(i);
			result.push_back(gcdN / i);
		}
	}
	result.push_back(gcdN);
	result.erase(unique(result.begin(), result.end()), result.end());
	sort(result.begin(), result.end());

	for (auto i = result.begin(); i != result.end(); i++) {
		printf("%d ",*i);
	}
}