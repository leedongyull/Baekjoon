#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
char num[100001] = { 0, };
string a;
string res="";
long long int sum = 0;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> num;
	a = num;
	sort(num, num + a.length(),greater<char>());
	if (num[a.length() - 1] != '0') {
		cout << -1;
		return 0;
	}
	for (int i = 0; i < a.length(); i++) {
		sum += num[i];
	}
	if (sum % 3 == 0) cout << num;
	else cout << -1;
	return 0;
}