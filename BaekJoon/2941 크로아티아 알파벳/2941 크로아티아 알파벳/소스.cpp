#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	char sen[102] = { 0 };
	int count = 0;
	fgets(sen, 102, stdin);

	for (int i = 0; i < strlen(sen)-1; i++) {
		if (sen[i] == 'c') {
			if (sen[i + 1] == '=') count++;
			else if (sen[i + 1] == '-') count++;
		}
		else if (sen[i] == 'd') {
			if (sen[i + 1] == '-') count++;
			else if (sen[i + 1] == 'z' && sen[i + 2] == '=') count += 2;
		}
		else if (sen[i] == 'l') {
			if (sen[i + 1] == 'j') count++;
		}
		else if (sen[i] == 'n') {
			if (sen[i + 1] == 'j') count++;
		}
		else if (sen[i] == 's') {
			if (sen[i + 1] == '=') count++;
		}
		else if (sen[i] == 'z') {
			if (sen[i + 1] == '='&&sen[i-1]!='d') count++;
		}
	}

	cout << strlen(sen) -1 - count;
}