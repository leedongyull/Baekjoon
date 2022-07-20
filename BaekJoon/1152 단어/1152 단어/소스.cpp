#include <iostream>
#include <cstring>

using namespace std;

char arr[1000000] = { " " };
int main() {

	int count = 0,len=0;

	fgets(arr,sizeof(arr),stdin);
	
	len = strlen(arr);

	for (int i = 0; i < len-1; i++) {
		if (i == 0 || arr[i+1] == ' '|| i == len-2) {
			continue;
		}
		else if (arr[i] == ' ') count++;
	}

	if (len == 2 && arr[0]== ' ') cout << "0";
	else cout << count + 1;

	return 0;
}