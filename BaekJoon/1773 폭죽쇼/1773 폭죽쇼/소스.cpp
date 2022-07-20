#include<iostream>

using namespace std;

int main(void) {
	int student[100] = { 0, };
	int num, time, count1 = 0, count2 = 0;
	cin >> num >> time;
	for (int i = 0; i < num; i++) {
		cin >> student[i];
	}
	for (int i = 1; i <= time; i++) {
		for (int j = 0; j < num; j++) {
			if (i % student[j] == 0) {
				count1++;
			}
		}
		if (count1 > 0) count2++;
		count1 = 0;
	}

	cout << count2;
}