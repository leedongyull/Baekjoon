#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int dwarf[10] = { 0, };
	int sum = 0;

	for (int i = 1; i <= 9; i++) {
		cin >> dwarf[i];
		sum += dwarf[i];
	}

	sort(dwarf, dwarf + 10);
	int a = 0;
	int b = 0;

	for (int i = 1; i < 9; i++) {
		for (int j = i + 1; j <= 9; j++) {
			if (sum - (dwarf[i] + dwarf[j]) == 100) {
				a = i;
				b = j;
				break;
			}
		}
		if (a == i) break;
	}

	for (int i = 1; i <= 9; i++) {
		if (i == a||i==b) continue;
		cout << dwarf[i]<<"\n";
		
	}

}