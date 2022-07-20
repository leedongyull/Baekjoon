#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(void) {
	while (1) {
		char str[112] = { " " };
		stack<char> bracket;
		bool perfect = true;
		cin.getline(str, 102);
		if (!strcmp(str,".")) break;
		for (int i = 0; i <= 102; i++) {
			if (str[i] == '(') {
				bracket.push(str[i]);
			}
			else if (str[i] == ')') {
				if (bracket.size()>0 && bracket.top() == '(') {
					bracket.pop();
				}
				else {
					perfect = false;
					break;
				}
			}
			else if (str[i] == '[') {
				bracket.push(str[i]);
			}
			else if (str[i] == ']') {
				if (bracket.size() > 0 && bracket.top() == '[') {
					bracket.pop();
				}
				else {
					perfect = false;
					break;
				}
			}
			else continue;
		}
		if (perfect == true && bracket.size()==0) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
}