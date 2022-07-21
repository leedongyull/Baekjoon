#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
	int num = 0;
	cin >> num;
	int height[51] = { 0, };
	int weight[51] = { 0, };
	for (int i = 0; i < num; i++) {
		cin >> weight[i] >> height[i];
	}
	for (int i = 0; i < num; i++) {
		int count = 0;
		for (int j = 0; j < num; j++) {
			if (weight[i] < weight[j]) {
				if (height[i] < height[j]) {
					count++;
				}
			}
		}
		cout << count + 1 << " ";
	}

}