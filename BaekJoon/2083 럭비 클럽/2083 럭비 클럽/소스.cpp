#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main() {

	string name[100] = { " ", };
	int age[100] = { 0, };
	int weight[100] = { 0, };
	int i = 0,count=0;

	while (1) {
		cin >> name[i] >> age[i] >> weight[i];
		if (name[i] == "#" || age[i] == 0 || weight[i] == 0) break;
		count++;
		i++;
	}

	for (int i = 0; i < count; i++) {
		cout << name[i] << " ";
		if (age[i] > 17 || weight[i] >= 80) {
			cout << "Senior" << endl;
		}
		else cout << "Junior" << endl;
	}

	return 0;

}