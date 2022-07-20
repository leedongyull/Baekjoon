#include <iostream>
#include <cstring>

using namespace std;

char arr[1000002] = { " ", };
int main() {

	int count = 0,len=0;

	fgets(arr,sizeof(arr),stdin);
	
	len = strlen(arr);

	if (arr[0] == ' ' && arr[1] == '\n') cout << '0';
	else if (arr[0] == '\n') cout << '0';
	else {

		for (int i = 0; i < len - 1; i++) {
			if (i == 0 || arr[i + 1] == ' ' || i == len - 2) {
				continue;
			}
			else if (arr[i] == ' ') count++;
		}

		cout << count + 1;
	}

	return 0;
}