#include <iostream>
#include <cstring>

using namespace std;

int main() {
	while (1) {
		string str;
		bool vow = false;
		bool pass = true;
		int vnum = 0;
		int cnum = 0;
		cin >> str;
		if (str == "end") break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
				vnum++;
				cnum = 0;
				vow = true;
				if (vnum == 3) {
					pass = false;
					cout << "<" << str << "> " << "is not acceptable.\n";
					break;
				}
			}
			else {
				vnum = 0;
				cnum++;
				if (cnum == 3) {
					pass = false;
					cout << "<" << str << "> " << "is not acceptable.\n";
					break;
				}
			}
			if (i < str.length() - 1) {
				if (str[i] == str[i + 1]) {
					if (str[i] == 'e' || str[i] == 'o') continue;
					pass = false;
					cout << "<" << str << "> " << "is not acceptable.\n";
					break;
				}
			}
		}
		if (pass == true && vow == true) cout << "<" << str << "> " << "is acceptable.\n";
		else if(pass==true && vow==false) cout << "<" << str << "> " << "is not acceptable.\n";
	}
}