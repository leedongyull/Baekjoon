#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int card[101] = { 0, };

	int num, res;
	cin >> num >> res;

	for (int i = 1; i <= num; i++) {
		cin >> card[i];
	}

	int sum = 0, result = 0;
	int count = 0;

	for (int i = 1; i <= num - 2; i++) {
		for (int j = i + 1; j <= num - 1; j++) {
			for (int k = j + 1; k <= num; k++) {
				if (card[i] + card[j] + card[k] > res) continue;
				sum = card[i] + card[j] + card[k];
				result = max(result, sum);
				sum = 0;
			}
		}
	}

	cout << result;

}
