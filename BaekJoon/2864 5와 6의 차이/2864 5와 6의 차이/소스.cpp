#include <iostream>
#include <string>

using namespace std;

string a, b;

int min(string n, string x) {
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == '6') {
			n[i] = '5';
		}
	}
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == '6') {
			x[i] = '5';
		}
	}
	int resa = stoi(n);
	int resb = stoi(x);
	return resa + resb;

}

int max(string n, string x) {
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == '5') {
			n[i] = '6';
		}
	}
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == '5') {
			x[i] = '6';
		}
	}
	int resa = stoi(n);
	int resb = stoi(x);
	return resa + resb;

}


int main() {
	string a, b;
	cin >> a >> b;
	if (a < b) {
		string temp = b;
		b = a;
		a = temp;
	}
	cout << min(a,b) << " " << max(a,b);

}