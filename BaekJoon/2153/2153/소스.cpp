#include <iostream>

using namespace std;

int main(void) {
	char al[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sen[20] = { 0 };
	int sum = 0;
	bool prime = true;
	fgets(sen, 20, stdin);

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 52; j++) {
			if (sen[i] == al[j]) sum += j+1;
		}
	}
	
	for (int i = 2; i < sum; i++) {
		if (sum % i == 0) prime = false;
	}

	if (prime == true) cout << "It is a prime word.";
	else cout << "It is not a prime word.";
}