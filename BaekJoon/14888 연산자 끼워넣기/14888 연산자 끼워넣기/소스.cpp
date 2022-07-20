#include <iostream>

using namespace std;

int num[12] = { 0, };
int oper[4] = { 0, };
char res[100] = { 0, };
int t = 0;
long long min_result = 1000000000;
long long max_result = -1000000000;

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }

void dfs(int plus,int minus,int mul,int div,int cnt,int sum) {
	if (cnt == t) {
		max_result = max(max_result, sum);
		min_result = min(min_result, sum);
	}

	if (plus > 0) dfs(plus-1,minus,mul,div,cnt+1,sum+num[cnt]);
	if (minus > 0) dfs(plus, minus - 1,mul,div, cnt + 1, sum - num[cnt]);
	if (mul > 0) dfs(plus,minus,mul-1,div,cnt + 1, sum * num[cnt]);
	if (div > 0) dfs(plus,minus,mul,div-1,cnt + 1, sum / num[cnt]);

}

int main(void) {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}

	dfs(oper[0],oper[1],oper[2],oper[3],1, num[0]);
	cout << max_result << '\n' << min_result;

}