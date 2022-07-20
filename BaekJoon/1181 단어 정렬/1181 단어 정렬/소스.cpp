#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	int n;
	char sen[20000][50];
	char temp[50];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> sen[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (strcmp(sen[i], sen[j]) > 0){
				strcpy(temp, sen[i]);
				strcpy(sen[i], sen[j]);
				strcpy(sen[j], temp);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << sen[i] << endl;
	}

}