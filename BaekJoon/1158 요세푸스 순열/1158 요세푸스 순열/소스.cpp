#include <iostream>

using namespace std;

	int person[5001] = { 0, };
	int per[5001] = { 0, };

int main(void) {
	int num = 0, len = 0, i = 0, count = 0, cnt = 0, k = 0;
	cin >> num >> len;
	cout << "<";
	while (1) {
		i++;
		if (i > num) i -= num;
		if(person[i]==0)	count++;
		if (count == len) {
			person[i] = 1;
			per[k] = i;
			k++;
			count = 0;
			cnt++;
		}
		if (cnt == num) break;
	}
	for (int i = 0; i < num-1; i++) {
		cout << per[i] << ", ";
	}
	cout << per[num-1] << ">";
}