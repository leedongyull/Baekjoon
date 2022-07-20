#include <iostream>
#include <cstring>
#include <stdio.h>


int main(void) {
	char key[46] = "1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
	char input[100010] = {0};
	while (fgets(input, 100010, stdin)) {
		int len = strlen(input);
		for (int i = 0; i < len-1; i++) {
			for (int j = 0; j < 47; j++) {
				if (input[i] == ' ') break;
				else if (input[i] == key[j]) {
					input[i] = key[j - 1];
					break;
				}
			}
		}
		printf("%s", input);
	}
}