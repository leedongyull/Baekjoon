#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s = 0;
		char sen[51] = { 0, };
		bool res = true;
		int count1 = 0,count2 = 0;
		cin >> sen;
		for (int j = 0; j < strlen(sen); j++) {
			if (sen[j] == '(') {
				s++;
				count1++;
			}
			else {
				count2++;
				s--;
				if (s < 0) res = false;
			}
		}
			if (res==true && count1 == count2) cout << "YES" << '\n';
			else cout << "NO"<<'\n';
	}
}