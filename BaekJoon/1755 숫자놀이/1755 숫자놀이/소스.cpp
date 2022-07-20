#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


string one = "one";
string two = "two";
string three = "three";
string four = "four";
string five = "five";
string six = "six";
string seven = "seven";
string eight = "eight";
string nine = "nine";
string zero = "zero";
string num[100] = { " ", };

string change(int i) {
	if (i == 0) return zero;
	else if (i == 1) return one;
	else if (i == 2) return two;
	else if (i == 3) return three;
	else if (i == 4) return four;
	else if (i == 5) return five;
	else if (i == 6) return six;
	else if (i == 7) return seven;
	else if (i == 8) return eight;
	else if (i == 9) return nine;
	else if (i >= 10) {
		string a = change(i / 10);
		string b = change(i % 10);
		return a + " " + b;
	}
}

int rechange(string a) {
	if (a == zero) return 0;
	else if (a == one) return 1;
	else if (a == two) return 2;
	else if (a == three) return 3;
	else if (a == four) return 4;
	else if (a == five) return 5;
	else if (a == six) return 6;
	else if (a == seven) return 7;
	else if (a == eight) return 8;
	else if (a == nine) return 9;
	else {
		size_t pos = a.rfind(" ");
		string start = a.substr(0, pos);
		string end = a.substr(pos + 1);
		int k = rechange(start);
		int j = rechange(end);
		return k * 10 + j;
	}

}

int main(void) {
	int start, end, cnt = 0;
	cin >> start >> end;
	for (int i = start; i <= end; i++) {
		num[i] = change(i);
	}
	sort(num + start, num + end+1);
	for (int i = start; i <= end; i++) {
		cout << rechange(num[i]) << ' ';
		cnt++;
		if (cnt % 10 == 0) cout << '\n';
	}
}